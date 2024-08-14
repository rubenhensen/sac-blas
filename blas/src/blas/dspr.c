#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"

void SACdspr(const char uplo, const int n, const double alpha, const double *x, const int incx, double *ap)
{
    CBLAS_UPLO cblasUplo;
    if (uplo == 'u' || uplo == 'U') {
        cblasUplo =  CblasUpper;
    } else {
        cblasUplo =  CblasLower;
    }

    cblas_dspr(CblasRowMajor, cblasUplo, n, alpha, x, incx, ap);
}
