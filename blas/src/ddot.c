#include </opt/OpenBLAS/include/cblas.h>

double SACddot(const int n, const double *x, const int incx, const double *y, const int incy)
{
    return cblas_ddot(n, x, incx, y, incy);
}
