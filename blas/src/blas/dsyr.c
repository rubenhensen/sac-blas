#include <Accelerate/Accelerate.h>

void SACdsyr(const char uplo, const int n, const double alpha, const double *x, const int incx, double *a, const int lda)
{
    enum CBLAS_UPLO cblasUplo;
    if (uplo == 'u' || uplo == 'U') {
        cblasUplo =  CblasUpper;
    } else {
        cblasUplo =  CblasLower;
    }

    cblas_dsyr(CblasRowMajor, cblasUplo, n, alpha, x, incx, a, lda);
}
