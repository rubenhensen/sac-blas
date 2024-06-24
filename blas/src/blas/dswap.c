#include </home/rhensen/bin/openblas/bin/include/cblas.h>

void SACdswap(const int n, double *x, const int incx, double *y, const int incy)
{
    cblas_dswap(n, x, incx, y, incy);
}
