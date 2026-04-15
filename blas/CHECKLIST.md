# SAC-BLAS Implementation Checklist

## Level 1 (Vector-Vector) — Complete
All 13 float + 13 double routines implemented and passing.

## Level 2 (Matrix-Vector) — Complete

- [x] cblas_?gemv
- [x] cblas_?gbmv
- [x] cblas_?symv
- [x] cblas_?sbmv
- [x] cblas_?spmv
- [x] cblas_?trmv
- [x] cblas_?tbmv
- [x] cblas_?tpmv
- [x] cblas_?trsv
- [x] cblas_?tbsv
- [x] cblas_?tpsv
- [x] cblas_?ger
- [x] cblas_?syr
- [x] cblas_?spr
- [x] cblas_?syr2
- [x] cblas_?spr2
- [-] cblas_?gerc (complex only)
- [-] cblas_?geru (complex only)
- [-] cblas_?hemv (complex only)
- [-] cblas_?hbmv (complex only)
- [-] cblas_?hpmv (complex only)
- [-] cblas_?her (complex only)
- [-] cblas_?her2 (complex only)
- [-] cblas_?hpr (complex only)
- [-] cblas_?hpr2 (complex only)

`[-]` = complex-number-only variants, not implemented (SAC complex support limited)

## Level 3 (Matrix-Matrix) — Complete

- [x] cblas_?gemm
- [x] cblas_?symm
- [x] cblas_?syrk
- [x] cblas_?syr2k
- [x] cblas_?trmm
- [x] cblas_?trsm

## Test Results: 91 passed, 0 failed

See `STATUS.md` for details and `run_tests.sh` to run the full suite.
