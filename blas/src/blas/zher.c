#include </home/rhensen/bin/openblas/bin/include/cblas.h>

void SACzher (const char uplo, const int n, const double alpha, const void *x, const int incx, void *a, const int lda)
{
    if (uplo == 'u' || uplo == 'U') {
        cblas_zher(CblasRowMajor, 121, n, alpha, x, incx, a, lda);
    } else {
        cblas_zher(CblasRowMajor, 122, n, alpha, x, incx, a, lda);
    }
}
