#include <cblas.h>

void SACsaxpy(const int n, const float a, const float *x, const int incx, float *y, const int incy)
{
    cblas_saxpy(n, a, x, incx, y, incy);
}
