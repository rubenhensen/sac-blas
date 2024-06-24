#include </home/rhensen/bin/openblas/bin/include/cblas.h>

void SACdsbmv(const char uplo, const int n, const int k, const double alpha, const double *a, const int lda, const double *x, const int incx, const double beta, double *y, const int incy)
{   
    if (uplo == 'u' || uplo == 'U') {
        cblas_dsbmv(CblasRowMajor, 121, n, k, alpha, a, lda, x, incx, beta, y, incy);
    } else {
        cblas_dsbmv(CblasRowMajor, 122, n, k, alpha, a, lda, x, incx, beta, y, incy);
    }
}
