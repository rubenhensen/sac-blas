LIBS  = -lopenblas
CFLAGS = -Wall
CC=gcc


# Should be equivalent to your list of .o files, if you don't build selectively
# OBJ=$(wildcard src/*.o)
SRC=$(wildcard src/*.c)
OBJ=$(SRC:.c=.o)
TESTSAC=$(wildcard ./test/*.sac)
TESTSACEXEC=$(TESTSAC:.sac=.out)
TESTSACEXECNOTC=$(TESTSAC:.sac=notc.out)
SACLIBS=BlasLevel1.sac BlasLevel2 Blas

Helper=./host/seq/libHelperMod.so ./tree/host/libHelperTree.so
BlasLevel1=./host/seq/libBlasLevel1Mod.so ./tree/host/libBlasLevel1Tree.so
BlasLevel2=./host/seq/libBlasLevel2Mod.so ./tree/host/libBlasLevel2Tree.so
OpenBlas=./host/seq/libOpenBlasMod.so ./tree/host/libOpenBlasTree.so


.PHONY: all test dblas1 OpenBlasnotc BlasLevel1notc BlasLevel2notc Helpernotc

%.o: %.c 
	$(CC) -c -o $@ $< $(CFLAGS) $(LIBS)

./host/seq/libOpenBlasMod.so ./tree/host/libOpenBlasTree.so &: OpenBlas.sac  $(OBJ)
	sac2c -check tc -Xl -lopenblas OpenBlas.sac

./host/seq/libBlasLevel1Mod.so ./tree/host/libBlasLevel1Tree.so &: BlasLevel1.sac $(Helper)
	sac2c -check tc  BlasLevel1.sac

./host/seq/libBlasLevel2Mod.so ./tree/host/libBlasLevel2Tree.so &: BlasLevel2.sac $(BlasLevel1) $(Helper)
	sac2c -check tc  BlasLevel2.sac

./host/seq/libHelperMod.so ./tree/host/libHelperTree.so &: Helper.sac
	sac2c -check tc  Helper.sac

OpenBlasnotc: OpenBlas.sac  $(OBJ)
	sac2c -Xl -lopenblas OpenBlas.sac

BlasLevel1notc : BlasLevel1.sac $(Helper)
	sac2c BlasLevel1.sac

BlasLevel2notc : BlasLevel2.sac $(BlasLevel1) $(Helper)
	sac2c BlasLevel2.sac

Helpernotc: Helper.sac
	sac2c Helper.sac

test: $(TESTSACEXEC) 
	for x in test/*.out; do ./$$x; done

notc: $(TESTSACEXECNOTC) 
	for x in test/notc/*notc.out; do ./$$x; done

notclib: BlasLevel1notc BlasLevel2notc OpenBlasnotc Helpernotc $(TESTSACEXECNOTC)
	for x in test/*notc.out; do ./$$x; done

./test/notc/%notc.out: ./test/%.sac 
	sac2c -o $@ $< 
	rm -rf test/*.i
	rm -rf test/*.o
	rm -rf test/*.c

./test/%.out: ./test/%.sac $(BlasLevel1) $(BlasLevel2) $(OpenBlas) $(Helper)
	sac2c -check tc -o $@ $< 
	rm -rf test/*.i
	rm -rf test/*.o
	rm -rf test/*.c

Main: Main.sac
	sac2c -o Main Main.sac
	rm -rf Main.i
	rm -rf Main.o
	rm -rf Main.c

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
	rm -f test/*.out
	rm -f test/*.i
	rm -f test/*.o
	rm -f test/*.c
