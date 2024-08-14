#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"

void SACsrot(const int n, float *x, const int incx, float *y, const int incy, const float c, const float s)
{
    cblas_srot(n, x, incx, y, incy, c, s);
}
