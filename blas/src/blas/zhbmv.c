#include "/home/rhensen/OpenBLAS/cblas.h"

void SACzhbmv(char uplo, const int n, const int k, const void *alpha, const void *a, const int lda, const void *x, const int incx, const void *beta, void *y, const int incy)
{
    if (uplo == 'u' || uplo == 'U') {
        cblas_zhbmv(CblasRowMajor, 121, n, k, alpha, a, lda, x, incx, beta, y, incy);
    } else {
        cblas_zhbmv(CblasRowMajor, 122, n, k, alpha, a, lda, x, incx, beta, y, incy);
    }
}
