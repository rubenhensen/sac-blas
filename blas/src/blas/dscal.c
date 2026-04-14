#include <Accelerate/Accelerate.h>

void SACdscal(const int n, const double a, double *x, const int incx)
{
    cblas_dscal(n, a, x, incx);
}

