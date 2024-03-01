gcc -c ./src/srotg.c -o ./src/srotg.o -lopenblas -lpthread -lgfortran
sac2c Openblas.sac && sac2c blas.sac && ./a.out 