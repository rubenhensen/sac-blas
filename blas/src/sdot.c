#include <cblas.h>

void SACsdot(const int n, const float *x, const int incx, const float *y, const int incy)
{
    cblas_sdot(n, x, incx, y, incy);
}
