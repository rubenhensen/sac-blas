#include <cblas.h>

void SACsspr(const char uplo, const int n, const float alpha, const float *x, const int incx, float *ap)
{
    cblas_sspr(CblasRowMajor, uplo, n, alpha, x, incx, ap);
}
