gcc -c ./src/srotg.c -o ./src/srotg.o -lopenblas -lpthread -lgfortran
sac2c OpenBlas.sac && sac2c blas.sac && ./a.out 