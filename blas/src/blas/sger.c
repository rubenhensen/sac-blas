#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"

void SACsger(const int m, const int n, const float alpha, const float *x, const int incx, const float *y, const int incy, float *a, const int lda)
{
    cblas_sger(CblasRowMajor, m, n, alpha, x, incx, y, incy, a, lda);
}

