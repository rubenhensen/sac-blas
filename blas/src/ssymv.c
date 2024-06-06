#include </opt/OpenBLAS/include/cblas.h>

void SACssymv(const char uplo, const int n, const float alpha, const float *a, const int lda, const float *x, const int incx, const float beta, float *y, const int incy)
{   
    if (uplo == 'u' || uplo == 'U') {
        cblas_ssymv(CblasRowMajor, 121, n, alpha, a, lda, x, incx, beta, y, incy);
    } else {
        cblas_ssymv(CblasRowMajor, 122, n, alpha, a, lda, x, incx, beta, y, incy);
    }
    
}
