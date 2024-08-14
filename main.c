#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"

void main() 
{
    double d1 = 0.0;
    double d2 = 0.0;
    double x1 = 7.0;
    double y1 = 0.0;
    double param[] = {0.0, 0.0, 0.0, 0.0, 0.0};
    printf("%f, %f, %f, %f, [ ", d1, d2, x1, y1);
    for (int i=0; i<5; i++) 
    {
        printf("%f ", param[i]);
    }
    printf("]");

    cblas_drotmg(&d1, &d2, &x1, y1, param);

    printf("%f, %f, %f, %f, [ ", d1, d2, x1, y1);
    for (int i=0; i<5; i++) 
    {
        printf("%f ", param[i]);
    }
    printf("]");
}
