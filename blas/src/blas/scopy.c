#include "/home/rhensen/OpenBLAS/cblas.h"

void SACscopy(const int n, const float *x, const int incx, float *y, const int incy)
{
    cblas_scopy(n, x, incx, y, incy);
}
