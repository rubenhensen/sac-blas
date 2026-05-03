# sac2c -tmt_pth: race condition in parallel `sum` produces wrong answers at SAC_PARALLEL=8

## Summary

Standalone `sum(vec)` reductions on `double[n]` compiled with `-tmt_pth`
are non-deterministic across thread counts, and at **`SAC_PARALLEL=8`
the reduction is also non-deterministic *between runs at the same
thread count*** — most runs return the correct value (modulo a few
ULPs of reordering), but some runs return wildly wrong answers (off by
20–80%). This looks like a race condition in the cross-thread merge of
partial sums, not just a reordering effect.

The same standalone `sum(vec)` pattern is used by SAC's BLAS Level-1
routines (`ddot`, `dnrm2`, `dasum`), which are called dozens of times
per GMRES iteration. The race produces large enough perturbations in
the orthogonalization steps that GMRES can take 2× more iterations to
converge under threading — or fail to converge within budget on older
sac2c builds.

## Concrete numbers — the repro

`repro.sac` builds a 4096×4096 deterministic matrix `A` and vector `x`,
computes `y = A·x` via the same with-loop pattern as native `dgemv`,
then prints `y[0]`, `y[n/2]`, `y[n-1]`, and `sum(y)` to 17 significant
digits.

### Inner reductions (per-row, inside a with-loop) are deterministic

`y[0]`, `y[n/2]`, `y[n-1]` are produced by:

```sac
y = { iv -> sum(A[iv] * x) | iv < [n] };
```

These are **bit-identical** across all thread counts (1, 2, 4, 8, 16)
and across multiple runs at the same thread count. So sac2c is **not
parallelizing the inner `sum`** — it parallelizes the outer with-loop,
and within each iteration the inner `sum` runs sequentially in one
thread.

Observed values (10 runs each at SAC_PARALLEL=2,4,8,16, and 5 runs at
8T): every run prints

```
y[0]    = -4.09435531004397671e+03
y[n/2]  =  3.36797069597727477e+03
y[n-1]  =  6.73565005987071436e+03
```

### Standalone `sum(vec)` IS parallelized — and broken at 8T

The final printf (`printf("sum(y) = %.17e\n", sum(y))`) calls
`sum` on the result vector — a standalone reduction with no
surrounding with-loop. sac2c parallelizes this. Observed values
(10 runs at each thread count, deduplicated):

| `SAC_PARALLEL` | distinct results across 10 runs |
|---|---|
| seq (no `-tmt_pth`) | `1.37635933020831794e+07` |
| 1  | `1.37635933020831794e+07` (matches seq) |
| 2  | `1.37635933020831812e+07` (deterministic, ~2 ULPs from seq) |
| 4  | `1.37635933020831831e+07` (deterministic, ~3 ULPs from seq) |
| 8  | **4 different values across 10 runs:** `1.37635933020831831e+07`, `1.05344134143828657e+07`, `6.21963830475840159e+06`, `2.77295096397121297e+06` |
| 16 | 2 different values across 10 runs: `1.37635933020831812e+07`, `1.37635933020831831e+07` |

Wider sweep (5 runs each) showed the race affects most thread counts ≥ 5 except some "lucky" ones:

| `SAC_PARALLEL` | distinct results | racy? |
|---|---|---|
| 1 | 1 (matches seq) | no |
| 2 | 1 | no |
| 3 | 1 | no |
| 4 | 1 | no |
| 5 | 2 (one ~28% wrong) | **yes** |
| 6 | 1 | no |
| 7 | 2 (one ~25% wrong) | **yes** |
| 8 | 4 (three wildly wrong) | **yes** |
| 9 | 2 (one ~19% wrong) | **yes** |
| 10 | 3 (two wrong) | **yes** |
| 12 | 4 (mostly wrong) | **yes** |
| 16 | 2 (both ULP-close to correct) | mild jitter |

So 1–4 and 6 are fine; 5, 7, 8, 9, 10, 12 are clearly racy; 16 has only
mild jitter. There is no obvious power-of-two-only or
divides-evenly-only pattern (4096 ÷ 8 = 512 cleanly, yet 8 is the worst;
4096 ÷ 6 = 682.67 doesn't divide evenly, yet 6 is fine).

The 8T results are not ULP drift — `2.77e+06` is **20× smaller** than
the correct `1.376e+07`. The 4 distinct 8T values are roughly 0.20,
0.45, 0.77, and 1.00 of the correct sum — consistent with some thread
partials being dropped from the final merge ~25% of the time.

16T showed mild non-determinism (2 ULP-shifted values across 10 runs),
suggesting scheduling jitter rather than the dropped-partial bug.

### TL;DR

| pattern | parallelized? | deterministic? |
|---|---|---|
| `sum(...)` inside a with-loop body | no | yes |
| standalone `sum(vec)` at top level | yes | only at 1, 2, 4 threads; **race at 8T**; mild jitter at 16T |

## Why this breaks GMRES

In the convection-diffusion GMRES benchmark
(`blas/gmres_benchmark/gmres_sac.sac`), per outer iteration we call:

- `dgemv` (heavy mat-vec) — outer with-loop parallel, inner sum
  sequential → **deterministic** per the result above
- `dnrm2(r)` — implemented as `sqrt(sum(r*r))` over an N-vector → **a
  standalone parallel `sum`**, hits the bug
- `ddot(w, v_j)` — `sum(w*v)` over an N-vector, called `i+1` times per
  Gram-Schmidt step → **standalone parallel `sum`**, hits the bug

So every outer GMRES iteration does ~`m·(m+1)/2` ddot calls and a
handful of dnrm2 calls, each going through the racy reduction. With
m=30 that's ~465 risky reductions per outer iteration. At
SAC_PARALLEL=8, even a small fraction of dropped-partial events
produces catastrophically bad inner products → loss of orthogonality
in the Krylov basis → restart → more iterations.

Observed iteration counts (GMRES convergence, tol=1e-10):

| N | reference (seq, C+CBLAS) | mt-pth 1T | 4T | 8T | 16T |
|---:|---:|---:|---:|---:|---:|
| 100   | 243   | 243 ✓   | 367   | 743   | not tested |
| 500   | 753   | 753 ✓   | 1056  | 6761  | not tested |
| 1000  | 1390  | 1390 ✓  | 1570  | 2834  | not tested |
| 2000  | 2651  | 2651 ✓  | 2125  | 4422  | not tested |
| 5000  | 6103  | 6103 ✓  | 5015  | 6474  | not tested |
| 10000 | 12031 | 12031 ✓ | 5130  | 23572 | not tested |

Same compiler (`2.1.0-PuurGeluk-271-g40073-dirty`, 2026-04-28); only
`SAC_PARALLEL` changes. `SAC_PARALLEL=1` matches the reference
exactly because no parallel reduction code path is taken.

## History across sac2c versions

| sac2c build | 8T @ N=10000 |
|---|---|
| pre `2.1.0-PuurGeluk-271-g40073` | iters=30000 (max), residual=4.02e-9 — **fails to converge** |
| `2.1.0-PuurGeluk-271-g40073-dirty` (2026-04-28) | iters=23572, residual=9.95e-11, converges but slower than seq |
| same build, sequential | iters=12031, residual=1.00e-10 — matches reference exactly |

The recent compiler update fixed the *hard* divergence (no more max-iter
failure), but the underlying race is still present.

### Upstream sac2c also affected (not a cleanroom-branch issue)

The repro was also tested against upstream sac2c
`2.1.0-PuurGeluk-243-gba81d` (DEBUG build, 2026-04-11). Race condition
reproduces there too. **Identical catastrophically-wrong values appear
in both compilers at every thread count** — proof the bug lives in
shared upstream lowering or runtime code, not in branch-specific code.

100 runs each at every thread count, counting *catastrophically wrong*
values (off by more than ULP-level rounding; ULP drift not counted as
wrong):

| `SAC_PARALLEL` | cleanroom `g40073-dirty` (RELEASE, sac2c_p) | original `gba81d` (DEBUG, sac2c_d) |
|---:|---:|---:|
| 1   | 0 / 100  | 0 / 100  |
| 2   | 0 / 100  | 0 / 100  |
| 3   | **1 / 100**  | **2 / 100**  |
| 4   | **10 / 100** | **9 / 100**  |
| 5   | **16 / 100** | **26 / 100** |
| 6   | **17 / 100** | **30 / 100** |
| 7   | **28 / 100** | **16 / 100** |
| 8   | **26 / 100** | **12 / 100** |
| 9   | **17 / 100** | **13 / 100** |
| 10  | **29 / 100** | **20 / 100** |
| 12  | **17 / 100** | **16 / 100** |
| 16  | **9 / 100**  | **18 / 100** |

Even **SAC_PARALLEL=3** races at low rate. From 4 threads onward the
race fires 10–30% of runs depending on thread count and build flavor.
No thread count above 2 is safe.

Wrong-value collisions between the two compilers (extensive — these are
*the same* IEEE-754 doubles, not just close):

| thread count | wrong value in **both** cleanroom and original |
|---:|---|
| 3   | `6.10530902004247345e+06` |
| 4   | `7.72789094629945885e+06`, `3.41725327851940785e+06` |
| 5   | `7.12974600429606624e+06`, `1.21069225720081031e+07`, `9.89348377435975336e+06` |
| 6   | `9.16192972282639518e+06`, `6.10530902004247252e+06`, `9.55749081361532025e+06`, `1.10789055312560964e+07` |
| 7   | `1.03767880582556650e+07`, `4.48601866515388805e+06`, `1.29187788638750911e+07`, `1.17875596300182976e+07`, `1.17875596300182957e+07` |
| 8   | `1.05301271058783457e+07`, `7.72789094629945885e+06`, `3.41725327851940785e+06`, `1.31192909875349868e+07` |
| 9   | `8.97615797237870656e+06`, `1.18830185733563639e+07`, `1.11988382969475687e+07`, `1.25674304069180787e+07`, `1.09107279768959731e+07` |
| 10  | `9.89348377435975336e+06`, `1.21069225720081031e+07`, `1.11641590661252756e+07`, `1.27967807346232999e+07`, `1.22434046644183993e+07`, `8.81428903096466511e+06`, `1.16902601339813434e+07` |
| 12  | `9.14843833221269399e+06`, `1.23210875276426859e+07`, `1.16053633972457517e+07`, `1.19362331480882298e+07`, `1.34775939249645043e+07`, `1.30911966009289771e+07`, `1.26116513563432209e+07` |
| 16  | `1.20929578833729252e+07`, `1.11787157289310601e+07`, `1.25241955087535642e+07` |

Across cleanroom and original, virtually every catastrophically-wrong
output observed in one compiler also appears in the other. The
correct-rate variance (e.g. 5T: 16 vs 26; 6T: 17 vs 30) is consistent
with timing differences between RELEASE and DEBUG builds opening the
race window with different probability — but the underlying race
produces the same set of bit-identical wrong outputs.

So this is a **long-standing upstream bug** in the `-tmt_pth` parallel
fold lowering (or its runtime support), not something introduced by the
cleanroom branch.

## Reproduction

`repro.sac` is in this directory; standalone, no SAC-BLAS deps.

```bash
cd blas/filedBugs/parallel_sum_nondeterminism

# Build both variants
sac2c_p           repro.sac -o repro_seq.out
sac2c_p -tmt_pth  repro.sac -o repro_mt.out

# Per-thread-count reproducibility
for n in 1 2 4 8 16; do
  echo "=== SAC_PARALLEL=$n ==="
  for i in $(seq 1 10); do SAC_PARALLEL=$n ./repro_mt.out | grep '^sum'; done | sort -u
done
```

Expected output: a single line per thread count (deterministic).
Observed: SAC_PARALLEL=8 prints 3–4 distinct lines, several of them
with values ~20–80% smaller than correct.

## Two questions for the sac2c side

1. **What goes wrong at thread counts 5, 7, 8, 9, 10, 12 specifically?**
   Thread counts 1–4 and 6 are fine; 16 has only mild ULP jitter; but
   5, 7, 8, 9, 10, 12 produce catastrophically wrong values some
   fraction of runs. The pattern is not "non-power-of-two", not
   "doesn't divide evenly" (4096÷8 = 512 cleanly is the worst), and
   not "high thread count" (16 is OK while 8 is broken). Most likely a
   synchronization / barrier bug in the cross-thread merge code path
   that hits at certain thread counts.

2. **Can the parallel `sum` at least be made deterministic per
   `SAC_PARALLEL` value?**
   2T, 4T, 16T already are (modulo the 16T jitter — also worth
   checking). If the cross-thread merge tree is fixed at compile time
   from `SAC_PARALLEL` and the array length, results should be
   bit-identical between runs at the same thread count. A
   compile-time flag like `-fold-deterministic` for users who need
   bit-reproducible reductions across thread counts would also be
   valuable for numerical kernels.

## Suggested places to look in sac2c

- The MT-fold transformation pass (with-loop fold → multi-threaded
  fold). Inspect the partial-sum merge — is there a missed barrier, an
  off-by-one in the binary tree depth, or a buffer reused across
  workers without proper synchronization?
- The runtime work distribution for fold-with-loops at thread count =
  power-of-two boundaries. The 4 → 8 → 16 transition shows clean → racy
  → mostly clean, which is unusual.
- Whether the bug is reproducible on Linux with the same compiler
  build, or is macOS-specific (we have only tested macOS aarch64).

## Workaround in this repo

The `OpenBlas::dgemv` workaround in `gmres.sac` /
`gmres_benchmark/gmres_sac.sac` does *not* fully sidestep this bug —
those files still call SAC `ddot` and `dnrm2`, which are the racy
standalone-`sum` callers. The workaround that *does* sidestep it is
**`SAC_PARALLEL=1`** (or sequential build), which matches the C+CBLAS
reference exactly.

## Environment

- sac2c version: `2.1.0-PuurGeluk-271-g40073-dirty` (release build, 2026-04-28)
- Platform: macOS Darwin 25.4.0 ARM64 (Apple Silicon)
- Threading model: `-tmt_pth` (pthreads)
- N for repro: 4096 (4096÷8 = 512 elements per thread, evenly divisible)
