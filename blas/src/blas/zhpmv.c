#include "/home/rhensen/OpenBLAS/cblas.h"

void SACzhpmv(const char uplo, const int n, const void *alpha, const void *ap, const void *x, const int incx, const void *beta, void *y, const int incy)
{
    if (uplo == 'u' || uplo == 'U') {
        cblas_zhpmv(CblasRowMajor, 121, n, alpha, ap, x, incx, beta, y, incy);
    } else {
        cblas_zhpmv(CblasRowMajor, 122, n, alpha, ap, x, incx, beta, y, incy);
    }
}
