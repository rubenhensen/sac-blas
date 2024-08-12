#include "/home/rhensen/OpenBLAS/cblas.h"
void SACstpmv(const char uplo, const char trans, const char diag, const int n, const float *ap, float *x, const int incx)
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

    cblas_stpmv(CblasRowMajor, cblasUplo, cblasTrans, cblasDiag, n, ap, x, incx);
}
