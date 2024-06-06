#include </opt/OpenBLAS/include/cblas.h>

void SACzhpr2(const char uplo, const int n, const void *alpha, const void *x, const int incx, const void *y, const int incy, void *ap)
{
    if (uplo == 'u' || uplo == 'U') {
        cblas_zhpr2(CblasRowMajor, 121, n, alpha, x, incx, y, incy, ap);
    } else {
        cblas_zhpr2(CblasRowMajor, 122, n, alpha, x, incx, y, incy, ap);
    }
}