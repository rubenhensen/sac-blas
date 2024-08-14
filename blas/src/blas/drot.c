#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"

void SACdrot(const int n, double *x, const int incx, double *y, const int incy, const double c, const double s)
{
    cblas_drot(n, x, incx, y, incy, c, s);
}
