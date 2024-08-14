#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"

void SACsswap(const int n, float *x, const int incx, float *y, const int incy)
{
    cblas_sswap(n, x, incx, y, incy);
}
