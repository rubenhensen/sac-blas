#include <cblas.h>
#include <stdio.h>

void main()
{
  float a = 0.0;
  float b = 0.0;
  float c = 0.0;
  float s = 0.0;
  cblas_srotg(&a, &b, &c, &s);

  printf("%f\n", a);
  printf("%f\n", b);
  printf("%f\n", c);
  printf("%f\n", s);
}

// gcc -o test_cblas_open ./test2.c  -lopenblas -lpthread -lgfortran && ./test_cblas_open