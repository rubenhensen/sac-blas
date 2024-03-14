#include <cblas.h>

void SACsrotm(const int n, float *x, const int incx, float *y, const int incy, const float *param)
{
    cblas_srotm(n, x, incx, y, incy, param);
}
