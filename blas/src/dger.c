#include </opt/OpenBLAS/include/cblas.h>

void SACdger(const int m, const int n, const double alpha, const double *x, const int incx, const double *y, const int incy, double *a, const int lda)
{
    cblas_dger(CblasRowMajor, m, n, alpha, x, incx, y, incy, a, lda);
}

