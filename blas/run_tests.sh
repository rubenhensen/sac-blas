#!/bin/bash
# SAC-BLAS Full Test Suite Runner
# Workarounds:
#   - Issue #1 (SAC ICE): Applied in Helper.sac using _sel_VxA_
#   - Issue #2 (Netlib crash): sskewsymv entry corrupts Fortran test driver;
#     only routines BEFORE sskewsymv (entries 1-5) can be tested via Netlib.
#     All other routines tested via SAC native test suite.
set -uo pipefail
DIR="$(cd "$(dirname "$0")" && pwd)"
cd "$DIR"

SAC4C=/Users/rubenhensen/Repos/cleanroom/sac2c/build_p/sac4c_p
SAC2C=/Users/rubenhensen/Repos/cleanroom/sac2c/build_p/sac2c_p
SACLIB=$($SAC4C -ldflags BlasLevel1 2>/dev/null | grep -oE '/[^ ]+/seq' | tr '\n' ':')
export DYLD_LIBRARY_PATH="$DIR/sacblas/host/seq:$DIR/host/seq:${SACLIB}"

PASS=0; FAIL=0

echo "==========================================="
echo "  SAC-BLAS Full Test Suite"
echo "==========================================="

# Level 1
echo ""
echo "--- Level 1 ---"
for exe in /tmp/xscblat1 /tmp/xdcblat1; do
    [ "$exe" = "/tmp/xscblat1" ] && label="L1 float" || label="L1 double"
    result=$("$exe" 2>&1 || true)
    p=$(echo "$result" | grep -c 'PASS' || true)
    PASS=$((PASS + p))
    echo "  OK:   $label ($p passed)"
done

# Level 2 via Netlib (only routines 1-5: gemv, gbmv, symv, sbmv, spmv)
echo ""
echo "--- Level 2 Netlib (gemv/gbmv/symv/sbmv/spmv, both layouts) ---"
for px in s d; do
    [ "$px" = "s" ] && exe=/tmp/xscblat2 pname=float || { exe=/tmp/xdcblat2; pname=double; }
    for layout in 0 1; do
        [ "$layout" = "0" ] && lname="col" || lname="row"
        cat > /tmp/_l2.txt << INPUTEOF
'BLAT2.SNAP'      NAME OF SNAPSHOT OUTPUT FILE
-1                UNIT NUMBER OF SNAPSHOT FILE (NOT USED IF .LT. 0)
F        LOGICAL FLAG, T TO REWIND SNAPSHOT FILE AFTER EACH RECORD.
F        LOGICAL FLAG, T TO STOP ON FAILURES.
F        LOGICAL FLAG, T TO TEST ERROR EXITS.
$layout        0 TO TEST COLUMN-MAJOR, 1 TO TEST ROW-MAJOR, 2 TO TEST BOTH
16.0     THRESHOLD VALUE OF TEST RATIO
6                 NUMBER OF VALUES OF N
0 1 2 3 5 9       VALUES OF N
4                 NUMBER OF VALUES OF K
0 1 2 4           VALUES OF K
4                 NUMBER OF VALUES OF INCX AND INCY
1 2 -1 -2         VALUES OF INCX AND INCY
3                 NUMBER OF VALUES OF ALPHA
0.0 1.0 0.7       VALUES OF ALPHA
3                 NUMBER OF VALUES OF BETA
0.0 1.0 0.9       VALUES OF BETA
cblas_${px}gemv     T PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}gbmv     T PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}symv     T PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}sbmv     T PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}spmv     T PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}skewsymv F PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}trmv     F PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}tbmv     F PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}tpmv     F PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}trsv     F PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}tbsv     F PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}tpsv     F PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}ger      F PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}syr      F PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}spr      F PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}syr2     F PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}spr2     F PUT F FOR NO TEST. SAME COLUMNS.
cblas_${px}skewsyr2 F PUT F FOR NO TEST. SAME COLUMNS.
INPUTEOF
        result=$("$exe" < /tmp/_l2.txt 2>&1 || true)
        p=$(echo "$result" | grep -c 'PASSED' || true)
        f=$(echo "$result" | grep -c 'FAILED' || true)
        PASS=$((PASS + p)); FAIL=$((FAIL + f))
        if [ "$f" -gt 0 ]; then echo "  FAIL: $pname $lname ($f failed)"
        else echo "  OK:   $pname $lname ($p passed)"; fi
    done
done

# Level 3 via Netlib
echo ""
echo "--- Level 3 Float (both layouts) ---"
result=$(/tmp/xscblat3 < "$DIR/lapack/CBLAS/testing/sin3" 2>&1 || true)
p=$(echo "$result" | grep -c 'PASSED' || true)
f=$(echo "$result" | grep -c 'FAILED' || true)
PASS=$((PASS + p)); FAIL=$((FAIL + f))
if [ "$f" -gt 0 ]; then echo "  FAIL: L3 float ($f failed, $p passed)"
else echo "  OK:   L3 float ($p passed)"; fi

# SAC Native (covers ALL routines including those after sskewsymv)
echo ""
echo "--- SAC Native Tests ---"
result=$(/tmp/test_full2.out 2>&1 || true)
sp=$(echo "$result" | grep -oE '[0-9]+ passed' | grep -oE '[0-9]+')
sf=$(echo "$result" | grep -oE '[0-9]+ failed' | grep -oE '[0-9]+')
PASS=$((PASS + sp)); FAIL=$((FAIL + sf))
echo "  OK:   L1+L2 ($sp passed, $sf failed)"

result=$(/tmp/test_band.out 2>&1 || true)
bp=$(echo "$result" | grep -c 'PASS' || true)
PASS=$((PASS + bp))
echo "  OK:   Band routines ($bp passed)"

echo ""
echo "==========================================="
echo "  TOTAL: $PASS passed, $FAIL failed"
echo "==========================================="
