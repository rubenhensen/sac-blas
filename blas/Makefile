LIBS  = -Xl -lopenblas
CFLAGS = -Wall
CC=gcc
CHECKFLAG= -check tc


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
StructuresPlus=./host/seq/libStructuresPlusMod.so ./tree/host/libStructuresPlusTree.so


.PHONY: all test dblas1 OpenBlasnotc BlasLevel1notc BlasLevel2notc Helpernotc StructuresPlusnotc

%.o: %.c 
	$(CC) -c -o $@ $< $(CFLAGS)

./host/seq/libOpenBlasMod.so ./tree/host/libOpenBlasTree.so &: OpenBlas.sac  $(OBJ)
	sac2c -tcuda $(CHECKFLAG) $(LIBS) OpenBlas.sac
	sac2c -tmt_pth $(CHECKFLAG) $(LIBS) OpenBlas.sac
	sac2c $(CHECKFLAG) $(LIBS) OpenBlas.sac

./host/seq/libBlasLevel1Mod.so ./tree/host/libBlasLevel1Tree.so &: BlasLevel1.sac $(Helper) 
	sac2c -tcuda $(CHECKFLAG) $(LIBS) BlasLevel1.sac
	sac2c -tmt_pth $(CHECKFLAG) $(LIBS) BlasLevel1.sac
	sac2c $(CHECKFLAG) $(LIBS) BlasLevel1.sac

./host/seq/libBlasLevel2Mod.so ./tree/host/libBlasLevel2Tree.so &: BlasLevel2.sac $(BlasLevel1) $(Helper) 
	sac2c -tcuda $(CHECKFLAG) $(LIBS) BlasLevel2.sac
	sac2c -tmt_pth $(CHECKFLAG) $(LIBS) BlasLevel2.sac
	sac2c $(CHECKFLAG) $(LIBS) BlasLevel2.sac

./host/seq/libHelperMod.so ./tree/host/libHelperTree.so &: Helper.sac
	sac2c -tcuda $(CHECKFLAG) $(LIBS) Helper.sac
	sac2c -tmt_pth $(CHECKFLAG) $(LIBS) Helper.sac
	sac2c $(CHECKFLAG) $(LIBS) Helper.sac

test: $(TESTSACEXEC) 
	for x in test/*.out; do echo $$x; ./$$x; done

./test/%.out: ./test/%.sac $(BlasLevel1) $(BlasLevel2) $(OpenBlas) $(Helper) 
	sac2c -tcuda $(CHECKFLAG) $(LIBS) -o cuda_$@ $< 
	sac2c -tmt_pth $(CHECKFLAG) $(LIBS) -o mt_$@ $< 
	sac2c $(CHECKFLAG) $(LIBS) -o seq_$@ $< 
	@rm -rf test/*.i
	@rm -rf test/*.o
	@rm -rf test/*.c

testing_tool.out: $(BlasLevel1) $(BlasLevel2) $(OpenBlas) $(Helper) 
	sac2c -tcuda $(CHECKFLAG) $(LIBS) -D ROUTINE=TEST -o cuda_$@ $< 
	sac2c -tmt_pth $(CHECKFLAG) $(LIBS) -D ROUTINE=TEST -o mt_$@ $< 
	sac2c $(CHECKFLAG) $(LIBS) -D ROUTINE=TEST -o seq_$@ $< 
	./testing_tool.out

Main: Main.sac
	sac2c -tcuda  $(CHECKFLAG) $(LIBS) -o cuda_$@ $< 
	sac2c -tmt_pth  $(CHECKFLAG) $(LIBS) -o mt_$@ $< 
	sac2c  $(CHECKFLAG) $(LIBS) -o seq_$@ $< 
	@rm -rf Main.i
	@rm -rf Main.o
	@rm -rf Main.c
	./Main

Measure: Measure.sac
	sac2c -tcuda $(CHECKFLAG) $(LIBS) -o cuda_$@ $< 
	sac2c -tmt_pth $(CHECKFLAG) $(LIBS) -o mt_$@ $< 
	sac2c $(CHECKFLAG) $(LIBS) -o seq_$@ $< 
	@rm -rf Measure.i
	@rm -rf Measure.o
	@rm -rf Measure.c
	./Measure


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
