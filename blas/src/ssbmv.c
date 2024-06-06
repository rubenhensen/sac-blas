#include </opt/OpenBLAS/include/cblas.h>

void SACssbmv(const char uplo, const int n, const int k, const float alpha, const float *a, const int lda, const float *x, const int incx, const float beta, float *y, const int incy)
{   
    if (uplo == 'u' || uplo == 'U') {
        cblas_ssbmv(CblasRowMajor, 121, n, k, alpha, a, lda, x, incx, beta, y, incy);
    } else {
        cblas_ssbmv(CblasRowMajor, 122, n, k, alpha, a, lda, x, incx, beta, y, incy);
    }
}
