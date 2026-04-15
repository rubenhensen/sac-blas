#include <Accelerate/Accelerate.h>

void SACzgemv(const char trans, const int m, const int n, const void *alpha, const void *a, const int lda, const void *x, const int incx, const void *beta, void *y, const int incy)
{
    enum CBLAS_TRANSPOSE cblasTrans;
    if (trans == 'N' || trans == 'n') {
        cblasTrans = CblasNoTrans;
    } else if (trans == 'T' || trans == 't') {
        cblasTrans = CblasTrans;
    } else {
        cblasTrans = CblasConjTrans;
    }
    cblas_zgemv(CblasRowMajor, cblasTrans, m, n, alpha, a, lda, x, incx, beta, y, incy);
}
