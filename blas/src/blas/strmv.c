#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"
void SACstrmv(const char uplo, const char trans, const char diag, const int n, const float *a, const int lda, float *x, const int incx)
{
    CBLAS_UPLO cblasUplo;
    if (uplo == 'u' || uplo == 'U') {
        cblasUplo =  CblasUpper;
    } else {
        cblasUplo =  CblasLower;
    }

    CBLAS_TRANSPOSE cblasTrans;
    if (trans == 'N' || trans == 'n') {
        cblasTrans = CblasNoTrans;
    } else {
        cblasTrans = CblasTrans;
    }

    CBLAS_DIAG cblasDiag;
    if (diag == 'u' || diag == 'U') {
        cblasDiag =  CblasUnit;
    } else {
        cblasDiag =  CblasNonUnit;
    }

    cblas_strmv(CblasRowMajor, cblasUplo, cblasTrans, cblasDiag, n, a, lda, x, incx);
}
