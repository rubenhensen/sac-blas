#include "/home/rhensen/bin/OpenBLAS/include/cblas.h"

void main() 
{
    // For d1 = 0.000000, d2 = 7.000000, x1 = 7.000000, y1 = 7.000000
    double d1 = 0.0;
    double d2 = 7.0;
    double x1 = 7.0;
    double y1 = 7.0;
    double param[] = {0.0, 1.0, 2.0, 3.0, 4.0};
    printf("%f, %f, %f, %f, [ ", d1, d2, x1, y1);
    for (int i=0; i<5; i++) 
    {
        printf("%f ", param[i]);
    }
    printf("]\n");

    cblas_drotmg(&d1, &d2, &x1, y1, param);

    printf("%f, %f, %f, %f, [ ", d1, d2, x1, y1);
    for (int i=0; i<5; i++) 
    {
        printf("%f ", param[i]);
    }
    printf("]\n");
}
