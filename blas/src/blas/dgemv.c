#include </home/rhensen/bin/openblas/bin/include/cblas.h>

void SACdgemv(char trans, int m, int n, double alpha, double* a, int lda, double* x, int incx, double beta, double* y, int incy)
{
    CBLAS_TRANSPOSE cblasTrans;

    if (trans == 'N' || trans == 'n') {
        cblasTrans = CblasNoTrans;
    } else {
        cblasTrans = CblasTrans;
    }

    cblas_dgemv(CblasRowMajor, cblasTrans, m, n, alpha, a, lda, x, incx, beta, y, incy);
}

