#include "/usr/include/x86_64-linux-gnu/cblas.h"

void SACdrotm(const int n, double *x, const int incx, double *y, const int incy, const double *param)
{
    cblas_drotm(n, x, incx, y, incy, param);
}
