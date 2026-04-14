#include <Accelerate/Accelerate.h>

void SACdtpsv(const char uplo, const char trans, const char diag, const int n, const double *ap, double *x, const int incx)
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

    enum CBLAS_DIAG cblasDiag;
    if (diag == 'u' || diag == 'U') {
        cblasDiag =  CblasUnit;
    } else {
        cblasDiag =  CblasNonUnit;
    }

    cblas_dtpsv(CblasRowMajor, cblasUplo, cblasTrans, cblasDiag, n, ap, x, incx);
}
