# Netlib CBLAS test framework crashes after ~26K calls

## Summary

The Netlib CBLAS Level 2 test driver (`c_sblat2.f`) crashes with SIGABRT after
approximately 26,000 CBLAS function calls in a single test run. The crash is NOT
in the CBLAS implementation — the same functions work correctly for 50,000+ calls
when invoked from a pure C program.

## Reproduction

Using the test input files in this directory:

```bash
# 5 routines (~25,931 calls): PASSES
./xscblat2 < sin2_5routines.txt    # -> END OF TESTS

# 6 routines (~26,172 calls): CRASHES  
./xscblat2 < sin2_6routines.txt    # -> SIGABRT after 5th routine
```

Both input files test the exact same routines with the same parameters. The only
difference is that the 6-routine version enables one additional routine (strmv),
pushing the total call count past the ~26K threshold.

All 6 routines pass individually — the crash is purely from cumulative calls.

## Evidence this is NOT a CBLAS implementation bug

50,000 calls to the same CBLAS functions from a pure C program complete without
any crash:

```c
for (int iter = 0; iter < 50000; iter++) {
    SACarg *r;
    BlasLevel2__sgemv11(&r, ...);
    SACARGdeleteSacArray(&r);
}
// -> "50000 calls completed successfully"
```

## Error output

```
Program received signal SIGABRT: Process abort signal.

Backtrace for this error:
#0  0x...
...
```

No error message — just a bare SIGABRT from the Fortran runtime.

## Impact

Prevents running the full Netlib CBLAS Level 2 test suite (16 routines × 2 layouts
= ~52K calls) in a single process. Workaround: split tests into batches of ≤5
routines.

## Environment

- Netlib LAPACK/CBLAS test suite (latest from repository)
- gfortran (Homebrew GCC)
- macOS Darwin ARM64
