#include </home/rhensen/bin/openblas/bin/include/cblas.h>

int SACisamax(const int n, const float *x, const int incx)
{
    return cblas_isamax(n, x, incx);
}
