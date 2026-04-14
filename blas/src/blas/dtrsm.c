#include <Accelerate/Accelerate.h>

void SACdtrsm(const char side, const char uplo, const char trans, const char diag, const int m, const int n, const double alpha, const double *a, const int lda, double *b, const int ldb)
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

    enum CBLAS_TRANSPOSE cblasTrans;
    if (trans == 'N' || trans == 'n') {
        cblasTrans = CblasNoTrans;
    } else {
        cblasTrans = CblasTrans;
    }

    enum CBLAS_DIAG cblasDiag;
    if (diag == 'u' || diag == 'U') {
        cblasDiag =  CblasUnit;
    } else {
        cblasDiag =  CblasNonUnit;
    }

    cblas_dtrsm(CblasRowMajor, cblasSide, cblasUplo, cblasTrans, cblasDiag, m, n, alpha, a, lda, b, ldb);
}
