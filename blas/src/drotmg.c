#include </opt/OpenBLAS/include/cblas.h>

void SACdrotmg(double *d1, double *d2, double *x1, const double y1, double *param)
{
    cblas_drotmg(d1, d2, x1, y1, param);
}
