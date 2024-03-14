LIBS  = -lopenblas
CFLAGS = -Wall
CC=gcc


# Should be equivalent to your list of .o files, if you don't build selectively
# OBJ=$(wildcard src/*.o)
SRC=$(wildcard src/*.c)
OBJ=$(SRC:.c=.o)
TESTSAC=$(wildcard test/*.sac)
TESTSACEXEC=$(TESTSAC:.sac=.out)
# TESTSACLIB=$(TESTSAC:test/%.sac=tree/host/lib%Tree.so)


all: blas run

.PHONY: all test

%.o: %.c 
	$(CC) -c -o $@ $< $(CFLAGS) $(LIBS)

host/seq/lib%Mod.so: %.sac 
	sac2c -check tc  $< 

tree/host/lib%Tree.so: %.sac 
	sac2c -check tc  $< 

test: $(TESTSACEXEC) 
	for x in test/*.out; do ./$$x; done

test/%.out: test/%.sac host/seq/libHelperMod.so host/seq/libBlasLevel1Mod.so tree/host/libBlasLevel1Tree.so host/seq/libBlasLevel2Mod.so tree/host/libBlasLevel2Tree.so host/seq/libOpenblasMod.so tree/host/libOpenblasTree.so
	sac2c -check tc -o $@ $< 
	rm -rf test/*.i
	rm -rf test/*.o
	rm -rf test/*.c

host/seq/libOpenblasMod.so tree/host/libOpenblasTree.so: Openblas.sac  $(OBJ)
	sac2c -check tc -Xl -lopenblas Openblas.sac

host/seq/libBlasLevel1Mod.so tree/host/libBlasLevel1Tree.so: BlasLevel1.sac host/seq/libHelperMod.so host/seq/libBlasLevel1Mod.so 
	sac2c -check tc BlasLevel1.sac

host/seq/libBlasLevel2Mod.so tree/host/libBlasLevel2Tree.so: BlasLevel2.sac host/seq/libHelperMod.so host/seq/libBlasLevel1Mod.so 
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
	rm -f a.out 
	rm -f a.out.c 
	rm -f a.out.i 
	rm -f a.out.o
