#include <Accelerate/Accelerate.h>

void SACdsyr2(const char uplo, const int n, const double alpha, const double *x, const int incx, const double *y, const int incy, double *a, const int lda)
{
    enum CBLAS_UPLO cblasUplo;
    if (uplo == 'u' || uplo == 'U') {
        cblasUplo =  CblasUpper;
    } else {
        cblasUplo =  CblasLower;
    }

    cblas_dsyr2(CblasRowMajor, cblasUplo, n, alpha, x, incx, y, incy, a, lda);
}
