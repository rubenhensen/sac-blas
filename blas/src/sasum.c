#include <cblas.h>

float SACsasum(const int n, const float *x, const int incx)
{
    return cblas_sasum(n, x, incx);
}
