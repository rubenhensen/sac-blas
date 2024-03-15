LIBS  = -lopenblas
CFLAGS = -Wall
CC=gcc


# Should be equivalent to your list of .o files, if you don't build selectively
# OBJ=$(wildcard src/*.o)
SRC=$(wildcard src/*.c)
OBJ=$(SRC:.c=.o)
TESTSAC=$(wildcard ./test/*.sac)
TESTSACEXEC=$(TESTSAC:.sac=.out)
SACLIBS=BlasLevel1.sac BlasLevel2 Blas

Helper=./host/seq/libHelperMod.so ./tree/host/libHelperTree.so
BlasLevel1=./host/seq/libBlasLevel1Mod.so ./tree/host/libBlasLevel1Tree.so
BlasLevel2=./host/seq/libBlasLevel2Mod.so ./tree/host/libBlasLevel2Tree.so
OpenBlas=./host/seq/libOpenBlasMod.so ./tree/host/libOpenBlasTree.so


.PHONY: all test dblas1

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

# tree/host/lib%Tree.so: %.sac 
# 	sac2c -check tc  $< 

test: $(TESTSACEXEC) 
	for x in test/*.out; do ./$$x; done

./test/%.out: ./test/%.sac $(BlasLevel1) $(BlasLevel2) $(OpenBlas) $(Helper)
	sac2c -check tc -o $@ $< 
	rm -rf test/*.i
	rm -rf test/*.o
	rm -rf test/*.c

# blas: Blas.sac host/seq/libOpenBlasMod.so host/seq/libBlasLevel1Mod.so host/seq/libBlasLevel2Mod.so tree/host/libOpenBlasTree.so tree/host/libBlasLevel1Tree.so tree/host/libBlasLevel2Tree.so
# 	sac2c -check tc Blas.sac -o blas

# blasnotc: Blas.sac host/seq/libOpenBlasMod.so host/seq/libBlasLevel1Mod.so host/seq/libBlasLevel2Mod.so tree/host/libOpenBlasTree.so tree/host/libBlasLevel1Tree.so tree/host/libBlasLevel2Tree.so
# 	sac2c Blas.sac -o blasnotc

# dblas1:
# 	sed 's/float/double/g' BlasLevel1.sac > DBlasLevel1.sac
# 	sed -i 's/s\(.*(\)/d\1/g' DBlasLevel1.sac

# run: 
# 	./blas

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
