#include </opt/OpenBLAS/include/cblas.h>

void SACdrotm(const int n, float *x, const int incx, float *y, const int incy, const float *param)
{
    cblas_drotm(n, x, incx, y, incy, param);
}
