# GMRES(30) Benchmark: SAC BLAS vs C vs SciPy

## Overview

This benchmark compares three implementations of the GMRES(m) iterative solver
(Generalized Minimal Residual Method) for solving non-symmetric linear systems Ax = b:

1. **SAC BLAS** — GMRES written in SAC using the SAC-BLAS Level 1 and Level 2 routines
   (`ddot`, `dnrm2`, `dscal`, `daxpy` from L1; `dgemv` from L2)
2. **C + Apple Accelerate** — Hand-written C calling Accelerate framework CBLAS directly
3. **SciPy** — Python `scipy.sparse.linalg.gmres` with sparse matrix storage

All three use the same algorithm: GMRES(30) with modified Gram-Schmidt orthogonalization,
Givens rotations for the least-squares problem, and restarts every 30 iterations.

## Test Problem

1D Convection-Diffusion equation discretized with finite differences:

```
-u_{i-1}(1 + h/2) + u_i(2 + h) - u_{i+1}(1 - h/2) = f_i
```

where h = 1/(N+1). This produces a tridiagonal, non-symmetric matrix. The right-hand
side is chosen so the exact solution is x = [1, 1, ..., 1].

## Results

| N | Iters | SAC BLAS | C + Accelerate | SciPy (sparse) | SAC / C |
|---|---|---|---|---|---|
| 100 | 243 | 0.003 s | 0.001 s | 0.014 s | 2.7x |
| 500 | 753 | 0.026 s | 0.022 s | 0.046 s | 1.2x |
| 1,000 | 1,390 | 0.072 s | 0.026 s | 0.111 s | 2.8x |
| 2,000 | 2,651 | 0.612 s | 0.451 s | 0.240 s | 1.4x |
| 5,000 | 6,103 | 7.295 s | 6.958 s | 0.743 s | 1.05x |
| 10,000 | 12,031 | 56.14 s | 53.34 s | 1.97 s | 1.05x |

All three produce **identical** iteration counts, residuals, and solution errors.

## Key Findings

### SAC BLAS approaches native C performance at scale

The SAC/C performance ratio narrows from 2.7x at N=100 to **1.05x at N=10,000**.
The overhead of SAC's sac4c interface (SACarg allocation/deallocation per BLAS call)
becomes negligible as the O(N^2) dense matrix-vector multiply dominates computation
time at larger problem sizes.

### SciPy wins at large N due to sparsity, not algorithm

SciPy uses sparse matrix storage (CSR format), giving O(N) matrix-vector multiply
for this tridiagonal system. SAC and C both use dense storage, giving O(N^2) per
matvec. At N=10,000, SciPy is 28x faster than SAC — but this is entirely due to
the data structure, not the GMRES algorithm.

### SAC beats SciPy for small-to-medium dense problems

For N <= 1,000, SAC BLAS is faster than SciPy (up to 5x at N=100) because SAC's
compiled code avoids Python interpreter overhead per iteration.

### No sparse array support exists in SAC

A literature review found no published work on sparse arrays in SAC. SAC's type
system and optimization pipeline (with-loop folding, array elimination) are
fundamentally designed for dense, rank-polymorphic arrays. This represents a
research gap — adding sparse support to SAC would eliminate the performance
cliff seen at large N in this benchmark.

## Running the Benchmark

```bash
cd blas/gmres_benchmark
bash run_benchmark.sh
```

Requirements:
- sac2c compiler (cleanroom release build)
- SAC-BLAS modules built (`make modules-seq` in `blas/`)
- gcc with Apple Accelerate framework
- Python 3 (venv with numpy/scipy created automatically)

## Files

| File | Description |
|------|-------------|
| `gmres_sac.sac` | SAC GMRES implementation using BLAS L1/L2 |
| `gmres_c.c` | C reference using Accelerate CBLAS |
| `gmres_scipy.py` | SciPy reference using sparse GMRES |
| `run_benchmark.sh` | Builds and runs all three benchmarks |

## Algorithm Details

GMRES(m) solves Ax = b by building an orthonormal basis for the Krylov subspace
K_m(A, r_0) = span{r_0, Ar_0, A^2 r_0, ..., A^(m-1) r_0} and finding the
approximate solution x_m that minimizes ||b - Ax_m|| over this subspace.

Each iteration involves:
- One matrix-vector multiply: w = A * v_i (**dgemv** — Level 2)
- i+1 inner products for Gram-Schmidt: h_j = w^T v_j (**ddot** — Level 1)
- i+1 vector updates: w -= h_j * v_j (**daxpy** — Level 1)
- One norm computation: ||w|| (**dnrm2** — Level 1)
- One vector scaling: v_{i+1} = w / ||w|| (**dscal** — Level 1)
- Givens rotation updates (O(m) scalar operations)

The dominant cost per iteration is the dgemv (O(N^2) for dense, O(nnz) for sparse).

## Related Literature

### SAC and BLAS/Linear Algebra

- **Scholz, "Single Assignment C: efficient support for high-level array operations
  in a functional setting"** — Journal of Functional Programming, Cambridge University
  Press. The foundational SAC language paper.

- **"Rank-Polymorphism for Shape-Guided Blocking"** (FHPNC 2023) — Demonstrates SAC
  achieving 7% faster than OpenBLAS and 3% faster than Intel MKL on blocked matrix
  multiply on a 32-core system. The most directly BLAS-relevant SAC paper.

- **Sinkarovs, Viessmann, Scholz, "Array Languages Make Neural Networks Fast"** (2019,
  arXiv:1912.05234) — SAC for tensor operations compared against TensorFlow/PyTorch.

- **Scholz, "Implementing the NAS benchmark MG in SAC"** — SAC for multigrid
  relaxation kernels, competitive with Fortran77.

- **Grelck, Scholz, "SAC — A Functional Array Language for Efficient Multi-threaded
  Execution"** — International Journal of Parallel Programming, Vol 34, No 4, 2006.

### Sparse Computation in Functional Languages

- **Grant, Sharp, Webster, Zhang, "Sparse matrix representations in a functional
  language"** — Journal of Functional Programming, Vol 6, Issue 1, 1996. Investigates
  CSR, quadtrees, and other sparse representations in Haskell for CFD applications.

- **Pizzuti, Steuwer, Dubach, "Generating Fast Sparse Matrix Vector Multiplication
  from a High Level Generic Functional IR"** — CC 2020. Uses the Lift functional IR
  to generate SpMV code that outperforms Nvidia cuSparse by 1.7x on average.

- **Arnold, "Data-Parallel Language for Correct and Efficient Sparse Matrix Codes"**
  — UC Berkeley, 2011. Describes LL, a functional data-parallel language for sparse
  matrix operations with verified correctness.

### Research Gap

No published work exists on sparse array support in SAC. SAC's dense array model
means O(N^2) storage and matvec cost even for sparse matrices. This benchmark
quantifies the impact: at N=10,000, the dense/sparse gap is 28x for a tridiagonal
system. Extending SAC with sparse array primitives or FFI bindings to sparse BLAS
libraries would be a valuable contribution.
