#include "/home/rhensen/OpenBLAS/cblas.h"
void SACssyr2(const char uplo, const int n, const float alpha, const float *x, const int incx, const float *y, const int incy, float *a, const int lda)
{
    CBLAS_UPLO cblasUplo;
    if (uplo == 'u' || uplo == 'U') {
        cblasUplo =  CblasUpper;
    } else {
        cblasUplo =  CblasLower;
    }

    cblas_ssyr2(CblasRowMajor, cblasUplo, n, alpha, x, incx, y, incy, a, lda);
}
