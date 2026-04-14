#include <Accelerate/Accelerate.h>

void SACsgemm(const char transa, const char transb, const int m, const int n, const int k, const float alpha, const float *a, const int lda, const float *b, const int ldb, const float beta, float *c, const int ldc)
{
    enum CBLAS_TRANSPOSE cblasTransA;
    if (transa == 'N' || transa == 'n') {
        cblasTransA = CblasNoTrans;
    } else {
        cblasTransA = CblasTrans;
    }

    enum CBLAS_TRANSPOSE cblasTransB;
    if (transb == 'N' || transb == 'n') {
        cblasTransB = CblasNoTrans;
    } else {
        cblasTransB = CblasTrans;
    }

    cblas_sgemm(CblasRowMajor, cblasTransA, cblasTransB, m, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}
