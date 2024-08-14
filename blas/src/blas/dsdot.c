#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"

double SACdsdot(const int n, const float *sx, const int incx, const float *sy, const int incy)
{
    return cblas_dsdot(n, sx, incx, sy, incy);
}
