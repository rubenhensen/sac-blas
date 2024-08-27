#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"

double SACdznrm2(const int *n, const void *x, const int *incx)
{
    return cblas_dznrm2(*n, x, *incx);
}