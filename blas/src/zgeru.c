#include </opt/OpenBLAS/include/cblas.h>

void SACzgeru(const int m, const int n, const void *alpha, const void *x, const int incx, const void *y, const int incy, void *a, const int lda)
{
    cblas_zgeru(CblasRowMajor, m, n, alpha, x, incx, y, incy, a, lda);
}
