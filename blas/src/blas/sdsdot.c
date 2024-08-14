#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"

float SACsdsdot(const int n, const float sb, const float *sx, const int incx, const float *sy, const int incy)
{
    return cblas_sdsdot(n, sb, sx, incx, sy, incy);
}
