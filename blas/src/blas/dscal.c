#include </home/rhensen/bin/openblas/bin/include/cblas.h>

void SACdscal(const int n, const double a, double *x, const int incx)
{
    cblas_dscal(n, a, x, incx);
}

