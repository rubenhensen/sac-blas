#include </opt/OpenBLAS/include/cblas.h>

void SACdrotg(double *a, double *b, double *c, double *s)
{
    cblas_drotg(a, b, c, s);
}

