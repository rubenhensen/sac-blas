#include "/home/rhensen/OpenBLAS/cblas.h"

double SACdasum(const int n, const double *x, const int incx)
{
    return cblas_dasum(n, x, incx);
}
