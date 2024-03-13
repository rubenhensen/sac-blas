#include <cblas.h>

void SACsgemv(char trans, int m, int n, float alpha, float* a, int lda, float* x, int incx, float beta, float* y, int incy)
{
    CBLAS_TRANSPOSE cblasTrans;

    if (trans == 'N' || trans == 'n') {
        cblasTrans = CblasNoTrans;
    } else {
        cblasTrans = CblasTrans;
    }

    cblas_sgemv(CblasRowMajor, cblasTrans, m, n, alpha, a, lda, x, incx, beta, y, incy);
}

