#include "/home/rhensen/OpenBLAS/cblas.h"

void SACsscal(const int n, const float a, float *x, const int incx)
{
    cblas_sscal(n, a, x, incx);
}

