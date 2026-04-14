#include <Accelerate/Accelerate.h>

void SACssyr2k(const char uplo, const char trans, const int n, const int k, const float alpha, const float *a, const int lda, const float *b, const int ldb, const float beta, float *c, const int ldc)
{
    enum CBLAS_UPLO cblasUplo;
    if (uplo == 'u' || uplo == 'U') {
        cblasUplo =  CblasUpper;
    } else {
        cblasUplo =  CblasLower;
    }

    enum CBLAS_TRANSPOSE cblasTrans;
    if (trans == 'N' || trans == 'n') {
        cblasTrans = CblasNoTrans;
    } else {
        cblasTrans = CblasTrans;
    }

    cblas_ssyr2k(CblasRowMajor, cblasUplo, cblasTrans, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}
