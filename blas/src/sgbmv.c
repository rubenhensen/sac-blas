#include <cblas.h>

void SACsgbmv(char trans, int m, int n, int kl, int ku, float alpha, float* a, int lda, float* x, int incx, float beta, float* y, int incy)
{
    CBLAS_TRANSPOSE cblasTrans;

    if (trans == 'N' || trans == 'n') {
        cblasTrans = CblasNoTrans;
    } else {
        cblasTrans = CblasTrans;
    }
    cblas_sgbmv(CblasRowMajor, cblasTrans, m, n, kl, ku, alpha, a, lda, x, incx, beta, y, incy);
}

