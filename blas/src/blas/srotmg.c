#include </home/rhensen/bin/openblas/bin/include/cblas.h>

void SACsrotmg(float *d1, float *d2, float *x1, const float y1, float *param)
{
    cblas_srotmg(d1, d2, x1, y1, param);
}
