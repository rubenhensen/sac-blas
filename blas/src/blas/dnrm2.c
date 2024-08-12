#include "/home/rhensen/OpenBLAS/cblas.h"

void SACdnrm2(const int n, const double *x, const int incx)
{
    cblas_dnrm2(n, x, incx);
}
