#include "/home/rhensen/OpenBLAS/cblas.h"

void SACdgbmv(char trans, int m, int n, int kl, int ku, double alpha, double* a, int lda, double* x, int incx, double beta, double* y, int incy)
{
    CBLAS_TRANSPOSE cblasTrans;

    if (trans == 'N' || trans == 'n') {
        cblasTrans = CblasNoTrans;
    } else {
        cblasTrans = CblasTrans;
    }
    cblas_dgbmv(CblasRowMajor, cblasTrans, m, n, kl, ku, alpha, a, lda, x, incx, beta, y, incy);
}

