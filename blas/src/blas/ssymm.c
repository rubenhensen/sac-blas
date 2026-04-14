#include <Accelerate/Accelerate.h>

void SACssymm(const char side, const char uplo, const int m, const int n, const float alpha, const float *a, const int lda, const float *b, const int ldb, const float beta, float *c, const int ldc)
{
    enum CBLAS_SIDE cblasSide;
    if (side == 'L' || side == 'l') {
        cblasSide = CblasLeft;
    } else {
        cblasSide = CblasRight;
    }

    enum CBLAS_UPLO cblasUplo;
    if (uplo == 'u' || uplo == 'U') {
        cblasUplo =  CblasUpper;
    } else {
        cblasUplo =  CblasLower;
    }

    cblas_ssymm(CblasRowMajor, cblasSide, cblasUplo, m, n, alpha, a, lda, b, ldb, beta, c, ldc);
}
