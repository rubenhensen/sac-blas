# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

SAC-BLAS is a SAC (Single Assignment C) implementation of BLAS (Basic Linear Algebra Subprograms). It re-implements standard BLAS routines in SAC, a functional array programming language, and validates them against OpenBLAS/CBLAS reference implementations via FFI bindings.

## Build Commands

All build commands run from the `blas/` directory:

```bash
cd blas

# Build and run tests (multi-threaded, 8 threads)
make test

# Build and run tests (sequential)
make test-seq

# Run a specific routine's tests
make test ROUTINE=SAXPY    # routine name in uppercase

# Debug builds
make debug          # multi-threaded
make debug_seq      # sequential

# Clean all build artifacts
make clean
```

**Compiler:** `sac2c` (SAC-to-C compiler). C wrappers compiled with `gcc`.  
**Linked library:** `-lcblas` (CBLAS)  
**Type checking:** enabled via `-check tc`

## Architecture

### Module dependency chain

```
Helper.sac → BlasLevel1.sac → BlasLevel2.sac
                                     ↓
OpenBlas.sac (FFI to CBLAS)    testing_tool.sac
```

- **Helper** (`src/sac/Helper.sac`) — Utility functions: equality checks, dimension validation, type guards.
- **BlasLevel1** (`src/sac/BlasLevel1.sac`) — BLAS Level 1 (vector-vector): rotg, rot, scal, copy, axpy, dot, nrm2, asum, iamax, etc.
- **BlasLevel2** (`src/sac/BlasLevel2.sac`) — BLAS Level 2 (matrix-vector): gemv, ger, symv, syr, trmv, trsv, spmv, spr, gbmv, etc.
- **OpenBlas** (`src/sac/OpenBlas.sac`) — FFI bindings to CBLAS via `#pragma linkname`/`#pragma linkobj` directives. Links to C wrapper objects in `bin/blas/`.

### C BLAS wrappers (`src/blas/*.c`)

Each file wraps a single CBLAS routine (e.g., `srotg.c` wraps `cblas_srotg`). These get compiled to `.o` files in `bin/blas/` and linked into SAC modules via pragma directives.

### Build targets

Two target variants are produced:
- **Sequential:** `host/seq/lib*.so` — single-threaded
- **Multi-threaded:** `host/mt-pth/lib*.so` — pthread-based (use `-tmt_pth` flag)

### Testing

`testing_tool.sac` is the comprehensive test framework. It compares SAC implementations against OpenBLAS reference outputs. Configurable via preprocessor defines:
- `ROUTINE` — which routine to test (e.g., `SAXPY`, `SGEMV`, `TEST` for all)
- `N` — input size (default: 10M)
- `INCX`/`INCY` — stride increments
- `MODE` — ST (single-threaded) or MT (multi-threaded)

Performance analysis scripts are in `casper_testing/graph_generator.py`.

### Naming conventions

BLAS prefix convention: `s` = float, `d` = double, `c`/`z` = complex.

### Known SAC compiler bugs

Filed bugs are documented in `blas/filedBugs/` as reproducible `.sac` files. These are potentially outdated and may have been fixed in newer SAC compiler versions — treat them with a grain of salt.

## Implementation status

Level 1 routines are complete. Level 2 progress is tracked in `blas/CHECKLIST.md` — routines marked `[-]` are complex-number-only variants not yet implemented, `[ ]` are pending.
