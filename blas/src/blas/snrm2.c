#include "/usr/include/x86_64-linux-gnu/cblas.h"

void SACsnrm2(const int n, const float *x, const int incx)
{
    cblas_snrm2(n, x, incx);
}
