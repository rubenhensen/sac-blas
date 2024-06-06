#include </opt/OpenBLAS/include/cblas.h>

int SACisamax(const int n, const float *x, const int incx)
{
    return cblas_isamax(n, x, incx);
}
