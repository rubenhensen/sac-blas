#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"

void SACdaxpy(const int n, const double a, const double *x, const int incx, double *y, const int incy)
{
    cblas_daxpy(n, a, x, incx, y, incy);
}
