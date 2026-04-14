#include <Accelerate/Accelerate.h>

void SACdsyrk(const char uplo, const char trans, const int n, const int k, const double alpha, const double *a, const int lda, const double beta, double *c, const int ldc)
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

    cblas_dsyrk(CblasRowMajor, cblasUplo, cblasTrans, n, k, alpha, a, lda, beta, c, ldc);
}
