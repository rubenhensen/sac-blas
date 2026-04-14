#include <Accelerate/Accelerate.h>

int SACidamax(const int n, const double *x, const int incx)
{
    return cblas_idamax(n, x, incx);
}
