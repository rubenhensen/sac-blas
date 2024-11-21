#include "/usr/include/x86_64-linux-gnu/cblas.h"

double SACddot(const int n, const double *x, const int incx, const double *y, const int incy)
{
    return cblas_ddot(n, x, incx, y, incy);
}
