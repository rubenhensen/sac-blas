#include </home/rhensen/bin/openblas/bin/include/cblas.h>

float SACsdot(const int n, const float *x, const int incx, const float *y, const int incy)
{
    return cblas_sdot(n, x, incx, y, incy);
}
