#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"

void SACscopy(const int n, const float *x, const int incx, float *y, const int incy)
{
    cblas_scopy(n, x, incx, y, incy);
}
