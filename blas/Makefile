LIBS  = -lopenblas
CFLAGS = -Wall
CC=gcc


# Should be equivalent to your list of .o files, if you don't build selectively
# OBJ=$(wildcard src/*.o)
SRC=$(wildcard src/*.c)
OBJ=$(SRC:.c=.o)
TESTSAC=$(wildcard test/*.sac)
TESTSACLIB=$(TESTSAC:test/%.sac=tree/host/lib%Tree.so)


all: blas run

.PHONY: all 

%.o: %.c 
	$(CC) -c -o $@ $< $(CFLAGS) $(LIBS)

host/seq/lib%Mod.so: %.sac 
	sac2c -check tc  $< 

tree/host/lib%Tree.so: test/%.sac 
	sac2c -check tc  $< 

testsac: $(TESTSACLIB)
	

host/seq/libOpenblasMod.so tree/host/libOpenblasTree.so: Openblas.sac  $(OBJ)
	sac2c -check tc -Xl -lopenblas Openblas.sac

host/seq/libBlasLevel1Mod.so tree/host/libBlasLevel1Tree.so: BlasLevel1.sac
	sac2c -check tc BlasLevel1.sac

host/seq/libBlasLevel2Mod.so tree/host/libBlasLevel2Tree.so: BlasLevel2.sac
	sac2c -check tc BlasLevel2.sac

blas: Blas.sac host/seq/libOpenblasMod.so host/seq/libBlasLevel1Mod.so host/seq/libBlasLevel2Mod.so tree/host/libOpenblasTree.so tree/host/libBlasLevel1Tree.so tree/host/libBlasLevel2Tree.so
	sac2c -check tc Blas.sac -o blas
	

notc: Blas.sac host/seq/libOpenblasMod.so host/seq/libBlasLevel1Mod.so host/seq/libBlasLevel2Mod.so tree/host/libOpenblasTree.so tree/host/libBlasLevel1Tree.so tree/host/libBlasLevel2Tree.so
	sac2c  Blas.sac

run: 
	./blas

clean: 
	rm -rf tree/
	rm -rf host/
	rm -rf *.o
	rm -rf *.i
	rm -rf src/*.o
	rm -f blas
