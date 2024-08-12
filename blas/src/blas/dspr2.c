#include "/home/rhensen/OpenBLAS/cblas.h"

void SACdspr2(const char uplo, const int n, const double alpha, const double *x, const int incx, const double *y, const int incy, double *ap)
{
    CBLAS_UPLO cblasUplo;
    if (uplo == 'u' || uplo == 'U') {
        cblasUplo =  CblasUpper;
    } else {
        cblasUplo =  CblasLower;
    }

    cblas_dspr2(CblasRowMajor, cblasUplo, n, alpha, x, incx, y, incy, ap);
}
