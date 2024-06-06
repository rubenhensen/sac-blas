#include </opt/OpenBLAS/include/cblas.h>

void SACzher2(const char uplo, const int n, const void *alpha, const void *x, const int incx, const void *y, const int incy, void *a, const int lda)
{
    if (uplo == 'u' || uplo == 'U') {
        cblas_zher2(CblasRowMajor, 121, n, alpha, x, incx, y, incy, a, lda);
    } else {
        cblas_zher2(CblasRowMajor, 122, n, alpha, x, incx, y, incy, a, lda);
    }
}
