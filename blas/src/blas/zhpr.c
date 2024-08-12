#include "/home/rhensen/OpenBLAS/cblas.h"

void SACzhpr(const CBLAS_UPLO uplo, const int n, const double alpha, const void *x, const int incx, void *ap)
{
    if (uplo == 'u' || uplo == 'U') {
        cblas_zhpr(CblasRowMajor, 121, n, alpha, x, incx, ap);
    } else {
        cblas_zhpr(CblasRowMajor, 122, n, alpha, x, incx, ap);
    }
}