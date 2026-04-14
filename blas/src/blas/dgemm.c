#include <Accelerate/Accelerate.h>

void SACdgemm(const char transa, const char transb, const int m, const int n, const int k, const double alpha, const double *a, const int lda, const double *b, const int ldb, const double beta, double *c, const int ldc)
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

    cblas_dgemm(CblasRowMajor, cblasTransA, cblasTransB, m, n, k, alpha, a, lda, b, ldb, beta, c, ldc);
}
