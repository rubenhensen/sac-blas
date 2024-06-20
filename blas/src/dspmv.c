#include </opt/OpenBLAS/include/cblas.h>

void SACdspmv(const char uplo, const int n, const double alpha, const double *ap, const double *x, const int incx, const double beta, double *y, const int incy) {
    CBLAS_UPLO cblasUplo;
    if (uplo == 'u' || uplo == 'U') {
        cblasUplo =  CblasUpper;
    } else {
        cblasUplo =  CblasLower;
    }
    cblas_dspmv(CblasRowMajor, cblasUplo, n, alpha, ap, x, incx, beta, y, incy);
}
