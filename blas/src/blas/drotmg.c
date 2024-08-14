#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"

void SACdrotmg(double *d1, double *d2, double *x1, double y1, double *param)
{
    cblas_drotmg(d1, d2, x1, y1, param);
}
