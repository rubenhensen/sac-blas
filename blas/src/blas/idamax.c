#include "/usr/include/x86_64-linux-gnu/cblas.h"

int SACidamax(const int n, const double *x, const int incx)
{
    return cblas_idamax(n, x, incx);
}
