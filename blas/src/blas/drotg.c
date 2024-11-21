#include "/usr/include/x86_64-linux-gnu/cblas.h"

void SACdrotg(double *a, double *b, double *c, double *s)
{
    cblas_drotg(a, b, c, s);
}

