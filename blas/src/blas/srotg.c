#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"

void SACsrotg(float *a, float *b, float *c, float *s)
{
    cblas_srotg(a, b, c, s);
}

