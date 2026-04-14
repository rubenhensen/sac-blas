#include <Accelerate/Accelerate.h>

void SACsspr(const char uplo, const int n, const float alpha, const float *x, const int incx, float *ap)
{
    enum CBLAS_UPLO cblasUplo;
    if (uplo == 'u' || uplo == 'U') {
        cblasUplo =  CblasUpper;
    } else {
        cblasUplo =  CblasLower;
    }

    cblas_sspr(CblasRowMajor, cblasUplo, n, alpha, x, incx, ap);
}
