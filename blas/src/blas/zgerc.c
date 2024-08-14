#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"

void SACzgerc(const int m, const int n, const void *alpha, const void *x, const int incx, const void *y, const int incy, void *a, const int lda)
{
    cblas_zgerc(CblasRowMajor, m, n, alpha, x, incx, y, incy, a, lda);
}
