#include </opt/OpenBLAS/include/cblas.h>

void SACdcopy(const int n, const double *x, const int incx, double *y, const int incy)
{
    cblas_dcopy(n, x, incx, y, incy);
}
