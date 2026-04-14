#include <Accelerate/Accelerate.h>
// void cblas_sgemv (const CBLAS_LAYOUT Layout, const CBLAS_TRANSPOSE trans, const int m, const int n, const float alpha, const float *a, const int lda, const float *x, const int incx, const float beta, float *y, const int incy);
void SACsgemv(const char trans, const int m, const int n, const float alpha, const float *a, const int lda, const float *x, const int incx, const float beta, float *y, const int incy)
{
    enum CBLAS_TRANSPOSE cblasTrans;

    if (trans == 'N' || trans == 'n') {
        cblasTrans = CblasNoTrans;
    } else {
        cblasTrans = CblasTrans;
    }

    cblas_sgemv(CblasRowMajor, cblasTrans, m, n, alpha, a, lda, x, incx, beta, y, incy);
}

