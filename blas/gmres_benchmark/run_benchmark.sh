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

# --- Build SAC BLAS version ---
echo "Building SAC BLAS version..."
$SAC2C -Xl -framework -Xl Accelerate "$DIR/gmres_sac.sac" -o "$DIR/gmres_sac.out" 2>&1 | grep -v 'ld: warning' || true
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

# --- Run all four ---
SACLIB=$(/Users/rubenhensen/Repos/cleanroom/sac2c/build_p/sac4c_p -ldflags BlasLevel1 2>/dev/null | grep -oE '/[^ ]+/seq' | tr '\n' ':' || true)
export DYLD_LIBRARY_PATH="$BLAS_DIR/sacblas/host/seq:$BLAS_DIR/host/seq:${SACLIB}"

echo "=== SAC BLAS (sequential) ==="
"$DIR/gmres_sac.out" 2>&1 | grep '^N=\|^==='
echo ""
echo "=== C + Apple Accelerate BLAS ==="
"$DIR/gmres_c.out" 2>&1 | grep '^N=\|^==='
echo ""
echo "=== C + OpenBLAS ==="
"$DIR/gmres_openblas.out" 2>&1 | grep '^N=\|^==='
echo ""
echo "=== Python SciPy (sparse) ==="
"$DIR/venv/bin/python3" "$DIR/gmres_scipy.py" 2>&1 | grep '^N=\|^==='
echo ""

echo "================================================================="
echo "  Notes"
echo "================================================================="
echo ""
echo "All four implementations use the same GMRES(30) algorithm with"
echo "Givens rotations and modified Gram-Schmidt orthogonalization."
echo ""
echo "SAC BLAS, C+Accelerate, and C+OpenBLAS use dense dgemv (O(N^2))."
echo "SciPy uses sparse matrix-vector multiply (O(N) for tridiagonal)."
echo ""
echo "All produce identical numerical results: same iteration counts,"
echo "residuals, and solution errors."
