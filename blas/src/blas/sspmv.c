#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"

void SACsspmv(const char uplo, const int n, const float alpha, const float *ap, const float *x, const int incx, const float beta, float *y, const int incy) {
    CBLAS_UPLO cblasUplo;
    if (uplo == 'u' || uplo == 'U') {
        cblasUplo =  CblasUpper;
    } else {
        cblasUplo =  CblasLower;
    }
    cblas_sspmv(CblasRowMajor, cblasUplo, n, alpha, ap, x, incx, beta, y, incy);
}
