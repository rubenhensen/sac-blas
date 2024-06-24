#include </home/rhensen/bin/openblas/bin/include/cblas.h>

void SACsnrm2(const int n, const float *x, const int incx)
{
    cblas_snrm2(n, x, incx);
}
