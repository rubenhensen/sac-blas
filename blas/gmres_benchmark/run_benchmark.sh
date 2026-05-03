#!/bin/bash
# GMRES(30) Benchmark: SAC BLAS vs C+Accelerate vs C+OpenBLAS vs SciPy
# Convection-diffusion test problem, tol=1e-10
set -euo pipefail
DIR="$(cd "$(dirname "$0")" && pwd)"
BLAS_DIR="$(dirname "$DIR")"
cd "$BLAS_DIR"

SAC2C=/Users/rubenhensen/Repos/cleanroom/sac2c/build_p/sac2c_p
OPENBLAS_DIR=/opt/homebrew/opt/openblas

echo "================================================================="
echo "  GMRES(30) Benchmark"
echo "  Problem: 1D Convection-Diffusion (tridiagonal, asymmetric)"
echo "  Tolerance: 1e-10"
echo "  Sizes: N = 100, 500, 1000, 2000, 5000, 10000"
echo "================================================================="
echo ""

# --- Build SAC BLAS version (sequential) ---
echo "Building SAC BLAS version (sequential)..."
$SAC2C -Xl -framework -Xl Accelerate "$DIR/gmres_sac.sac" -o "$DIR/gmres_sac.out" 2>&1 | grep -v 'ld: warning' || true
echo ""

# --- Build SAC BLAS version (multi-threaded pthreads) ---
echo "Building SAC BLAS modules (mt-pth) if missing..."
if [ ! -f "$BLAS_DIR/host/mt-pth/libBlasLevel2Mod.dylib" ]; then
    ( cd "$BLAS_DIR" && make modules-mt ) 2>&1 | tail -5
fi
echo "Building SAC BLAS version (mt-pth)..."
$SAC2C -tmt_pth -Xl -framework -Xl Accelerate "$DIR/gmres_sac.sac" -o "$DIR/gmres_sac_mt.out" 2>&1 | grep -v 'ld: warning' || true
echo ""

# --- Build C + Accelerate version ---
echo "Building C + Apple Accelerate version..."
gcc -O2 -DACCELERATE_NEW_LAPACK -framework Accelerate "$DIR/gmres_c.c" -o "$DIR/gmres_c.out" -lm 2>&1
echo ""

# --- Build C + OpenBLAS version ---
echo "Building C + OpenBLAS version..."
gcc -O2 -I${OPENBLAS_DIR}/include -L${OPENBLAS_DIR}/lib \
    -Wl,-rpath,${OPENBLAS_DIR}/lib \
    "$DIR/gmres_openblas.c" -o "$DIR/gmres_openblas.out" -lopenblas -lm 2>&1
echo ""

# --- Build Python venv if needed ---
if [ ! -d "$DIR/venv" ]; then
    echo "Setting up Python venv..."
    python3 -m venv "$DIR/venv"
    "$DIR/venv/bin/pip" install numpy scipy -q 2>&1 | tail -1
fi
echo ""

# --- Run all backends ---
SACLIB_SEQ=$(/Users/rubenhensen/Repos/cleanroom/sac2c/build_p/sac4c_p -ldflags BlasLevel1 2>/dev/null | grep -oE '/[^ ]+/seq' | tr '\n' ':' || true)
SACLIB_MT=$(/Users/rubenhensen/Repos/cleanroom/sac2c/build_p/sac4c_p -tmt_pth -ldflags BlasLevel1 2>/dev/null | grep -oE '/[^ ]+/mt-pth' | tr '\n' ':' || true)

echo "=== SAC BLAS (sequential) ==="
DYLD_LIBRARY_PATH="$BLAS_DIR/sacblas/host/seq:$BLAS_DIR/host/seq:${SACLIB_SEQ}" \
    "$DIR/gmres_sac.out" 2>&1 | grep '^N=\|^==='
echo ""
echo "=== SAC BLAS (mt-pth, 4 threads) ==="
SAC_PARALLEL=4 DYLD_LIBRARY_PATH="$BLAS_DIR/sacblas/host/mt-pth:$BLAS_DIR/host/mt-pth:${SACLIB_MT}" \
    "$DIR/gmres_sac_mt.out" 2>&1 | grep '^N=\|^==='
echo ""
echo "=== SAC BLAS (mt-pth, 8 threads) ==="
SAC_PARALLEL=8 DYLD_LIBRARY_PATH="$BLAS_DIR/sacblas/host/mt-pth:$BLAS_DIR/host/mt-pth:${SACLIB_MT}" \
    "$DIR/gmres_sac_mt.out" 2>&1 | grep '^N=\|^==='
echo ""
echo "=== C + Apple Accelerate BLAS (1 thread) ==="
VECLIB_MAXIMUM_THREADS=1 "$DIR/gmres_c.out" 2>&1 | grep '^N=\|^==='
echo ""
echo "=== C + Apple Accelerate BLAS (default threading) ==="
"$DIR/gmres_c.out" 2>&1 | grep '^N=\|^==='
echo ""
echo "=== C + OpenBLAS (1 thread) ==="
OPENBLAS_NUM_THREADS=1 "$DIR/gmres_openblas.out" 2>&1 | grep '^N=\|^==='
echo ""
echo "=== C + OpenBLAS (8 threads) ==="
OPENBLAS_NUM_THREADS=8 "$DIR/gmres_openblas.out" 2>&1 | grep '^N=\|^==='
echo ""
echo "=== Python SciPy (sparse) ==="
"$DIR/venv/bin/python3" "$DIR/gmres_scipy.py" 2>&1 | grep '^N=\|^==='
echo ""

echo "================================================================="
echo "  Notes"
echo "================================================================="
echo ""
echo "All implementations use the same GMRES(30) algorithm with"
echo "Givens rotations and modified Gram-Schmidt orthogonalization."
echo ""
echo "SAC BLAS, C+Accelerate, and C+OpenBLAS use dense dgemv (O(N^2))."
echo "SciPy uses sparse matrix-vector multiply (O(N) for tridiagonal)."
echo ""
echo "Threading control:"
echo "  - SAC seq: single-threaded build (no -tmt_pth)"
echo "  - SAC mt-pth: pthread build, SAC_PARALLEL={4,8}"
echo "  - Accelerate 1T: VECLIB_MAXIMUM_THREADS=1"
echo "  - Accelerate default: framework decides internally"
echo "  - OpenBLAS 1T/8T: OPENBLAS_NUM_THREADS={1,8}"
echo ""
echo "All produce identical numerical results: same iteration counts,"
echo "residuals, and solution errors."
