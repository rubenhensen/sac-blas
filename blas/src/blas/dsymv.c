#include <Accelerate/Accelerate.h>

void SACdsymv(const char uplo, const int n, const double alpha, const double *a, const int lda, const double *x, const int incx, const double beta, double *y, const int incy)
{
    enum CBLAS_UPLO cblasUplo;
    if (uplo == 'u' || uplo == 'U') {
        cblasUplo =  CblasUpper;
    } else {
        cblasUplo =  CblasLower;
    }

    cblas_dsymv(CblasRowMajor, cblasUplo, n, alpha, a, lda, x, incx, beta, y, incy);
}
