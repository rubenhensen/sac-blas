#include </home/rhensen/bin/openblas/bin/include/cblas.h>

void SACssyr(const char uplo, const int n, const float alpha, const float *x, const int incx, float *a, const int lda)
{
    CBLAS_UPLO cblasUplo;
    if (uplo == 'u' || uplo == 'U') {
        cblasUplo =  CblasUpper;
    } else {
        cblasUplo =  CblasLower;
    }

    cblas_ssyr(CblasRowMajor, cblasUplo, n, alpha, x, incx, a, lda);
}
