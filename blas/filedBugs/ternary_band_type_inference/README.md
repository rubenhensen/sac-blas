# sac2c type-inference error: chained selection in ternary inside with-loop

## Summary

A module function whose body contains a ternary expression `cond ? band[i][j-i] : 0.0f` inside a with-loop fails type inference when the function is called from another translation unit under an `if`/`else` branch. sac2c creates a duplicated specialization (`_dup_NN_..._Cond_NN`) and infers the chained-selection branch as `float[*]` (vector) instead of `float` (scalar), conflicting with the `0.0f` branch.

The natural form fails:

```sac
float[n,n] upperTriBandToFull(float[.,.] band, int k, int n)
{
  return { [i,j] -> (j >= i && j-i <= k) ? band[i][j-i] : 0.0f | [i,j] < [n,n] };
}
```

The `_sel_VxA_` form works (forces scalar return):

```sac
float[n,n] upperTriBandToFull(float[.,.] band, int k, int n)
{
  return { [i,j] -> (j >= i && j-i <= k) ? _sel_VxA_([j-i], band[i]) : 0.0f | [i,j] < [n,n] };
}
```

## Error

```
./Helper.sac:9:21: abort:
   8. {
   9.   return { [i,j] -> (j >= i && j-i <= k) ? band[i][j-i] : 0.0f | [i,j] < [n,n] };
                          ↑
  10. }
  11.
  Function _dup_51_upperTriBandToFull__Cond_2: Component #0 of inferredreturn type
  (#9: in [ float[*], float] le < 6> ge <>) is not within #6: in [ --, float] le <> ge < 9>
Compilation failed while Running SAC optimizations.
```

## Minimal reproduction

Two files (~25 lines total). The test program imports **only** the local `Helper` module — no Stdlib `use` lines. `Helper` itself imports `Array: all`; replacing that with hand-inlined operator/`sel` definitions makes the bug disappear, so something in the way `Array`'s overloaded definitions are loaded is part of the trigger.

`Helper.sac`:
```sac
module Helper;

use Array: all;

export all;

float[n,n] upperTriBandToFull(float[.,.] band, int k, int n)
{
  return { [i,j] -> (j >= i && j-i <= k) ? band[i][j-i] : 0.0f | [i,j] < [n,n] };
}
```

`test.sac`:
```sac
use Helper: all;

inline float[d:shp] my_reshape(int[d] shp, float[*] arr)
{
  return _reshape_VxA_(shp, arr);
}

int main() {
  band = my_reshape([3,2], [1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 0.0f]);
  cond = true;
  if (cond) {
    full = upperTriBandToFull(band, 1, 3);
  } else {
    full = upperTriBandToFull(band, 1, 3);
  }
  return _toi_S_(_sel_VxA_([0,0], full));
}
```

Build:

```bash
sac2c_p Helper.sac          # OK
sac2c_p -o test.out test.sac
# -> abort during SAC optimizations with the error above
```

## Trigger conditions (what was needed to reproduce)

- The function must be in a **separate module** that gets specialized at the caller — the same code compiles fine when defined inline in a single program.
- The caller must invoke the function from **inside an `if`/`else`** (both branches calling it). A single direct call doesn't trigger the bug; the `if` branching is what causes the `_Cond_NN` duplicate specialization.
- The argument must have an **abstract shape** — `reshape(...)` (or my_reshape, returning `float[d:shp]`) triggers it; a literal `[[1.0f,2.0f],[3.0f,4.0f],[5.0f,0.0f]]` (concrete `float[3,2]`) does **not**.
- `Helper` must `use Array: all` (or `ArrayBasics: all` + `ScalarArith: all`). Replacing those with inline `sel` and inline `<`, `>=`, `<=`, `&&`, `-` definitions in `Helper` makes the bug go away, so the trigger involves Stdlib's polymorphic overloads.

## Workaround

Replace `band[i][j-i]` with `_sel_VxA_([j-i], band[i])` (or `_sel_VxA_([k-i+j], band[i])` for the lower variant). The explicit primitive returns a scalar `float`, which sac2c's type checker accepts without issue.

Applied in `blas/src/sac/Helper.sac` for both `upperTriBandToFull` and `lowerTriBandToFull`.

## Notes

- This bug previously also masked the now-fixed sac2c issue [#1](https://github.com/rubenhensen/sac-blas/issues/1) (`FUNDEF_ISLACFUN` ICE on `pad/take` composition). When attempting to remove the `_sel_VxA_` workaround after #1 was fixed, this separate type-inference bug surfaced.
- The `_dup_NN_..._Cond_NN` function-name suffix indicates this is a duplicated specialization for a particular conditional context.

## Environment

- sac2c version: `2.1.0-PuurGeluk-271-g40073` (release build, 2026-04-28)
- Platform: macOS Darwin ARM64
