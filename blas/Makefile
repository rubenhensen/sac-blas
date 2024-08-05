LIBS  = -Xl -L/home/rhensen/bin/openblas/bin/lib/ -Xl -lopenblas
CFLAGS = -Wall -L/home/rhensen/bin/openblas/bin/lib/ -lopenblas
CC = gcc
CHECKFLAG = -check tc -ecc

THREADS = 8

# Target for cuda -tcuda 


Helper_seq = host/seq/libHelperMod.so tree/host/libHelperTree.so
BlasLevel1_seq = host/seq/libBlasLevel1Mod.so tree/host/libBlasLevel1Tree.so
BlasLevel2_seq = host/seq/libBlasLevel2Mod.so tree/host/libBlasLevel2Tree.so
OpenBlas_seq = host/seq/libOpenBlasMod.so tree/host/libOpenBlasTree.so

Helper = host/mt-pth/libHelperMod.so tree/host/libHelperTree.so
BlasLevel1 = host/mt-pth/libBlasLevel1Mod.so tree/host/libBlasLevel1Tree.so
BlasLevel2 = host/mt-pth/libBlasLevel2Mod.so tree/host/libBlasLevel2Tree.so
OpenBlas = host/mt-pth/libOpenBlasMod.so tree/host/libOpenBlasTree.so
BLAS_BIN = $(patsubst src/blas/%.c, bin/blas/%.o, $(wildcard src/blas/*.c))


ROUTINE=TEST


.PHONY: test test-seq stest echo

echo: 
	echo $(BLAS_BIN)

stest: 
	sbatch long make test

test: bin/sac/mt-pth/testing_tool.out
	env SAC_PARALLEL=$(THREADS) ./$<

test-seq: bin/sac/seq/testing_tool.out
	env LD_LIBRARY_PATH="/home/rhensen/bin/openblas/bin/lib/" ./$<

bin/blas/%.o: src/blas/%.c
	$(CC) -c -o $@ $< $(CFLAGS)

host/seq/libOpenBlasMod.so tree/host/libOpenBlasTree.so &: src/sac/OpenBlas.sac $(BLAS_BIN)
	sac2c $(CHECKFLAG) $(LIBS) $< 
host/seq/libHelperMod.so tree/host/libHelperTree.so &: src/sac/Helper.sac
	sac2c $(CHECKFLAG) $(LIBS) $< 
host/seq/libBlasLevel1Mod.so tree/host/libBlasLevel1Tree.so &: src/sac/BlasLevel1.sac $(Helper)
	sac2c $(CHECKFLAG) $(LIBS)  src/sac/BlasLevel1.sac
bin/sac/seq/testing_tool.out: src/sac/testing_tool.sac $(BlasLevel1) $(BlasLevel2) $(OpenBlas) $(Helper) 
	sac2c $(CHECKFLAG) $(LIBS) -D ROUTINE=$(ROUTINE) -o $@ $<
host/seq/libBlasLevel2Mod.so tree/host/libBlasLevel2Tree.so &: src/sac/BlasLevel2.sac $(BlasLevel1) $(Helper)
	sac2c $(CHECKFLAG) $(LIBS) src/sac/BlasLevel2.sac

host/mt-pth/libOpenBlasMod.so: src/sac/OpenBlas.sac $(BLAS_BIN)
	sac2c $(CHECKFLAG) $(LIBS) -tmt_pth $< 
host/mt-pth/libHelperMod.so: src/sac/Helper.sac
	sac2c $(CHECKFLAG) $(LIBS) -tmt_pth $< 
host/mt-pth/libBlasLevel1Mod.so: src/sac/BlasLevel1.sac $(Helper)
	sac2c $(CHECKFLAG) $(LIBS) -tmt_pth src/sac/BlasLevel1.sac
host/mt-pth/libBlasLevel2Mod.so: src/sac/BlasLevel2.sac $(BlasLevel1)  $(Helper)
	sac2c $(CHECKFLAG) $(LIBS) -tmt_pth src/sac/BlasLevel2.sac
bin/sac/mt-pth/testing_tool.out: src/sac/testing_tool.sac $(BlasLevel1) $(BlasLevel2) $(OpenBlas) $(Helper) 
	sac2c $(CHECKFLAG) $(LIBS) -tmt_pth -D ROUTINE=$(ROUTINE) -o $@ $<
	
bin/sac/seq/%.out: src/sac/%.sac
	sac2c $(CHECKFLAG) $(LIBS) -o $@ $< 
	@rm -rf bin/sac/*.i
	@rm -rf bin/sac/*.o
	@rm -rf bin/sac/*.c

bin/sac/mt-pth/%.out: src/sac/%.sac
	sac2c -tmt_pth $(CHECKFLAG) $(LIBS) -o $@ $< 
	@rm -rf bin/sac/*.i
	@rm -rf bin/sac/*.o
	@rm -rf bin/sac/*.c


# test_single: test/isamax.sac
# 	sac2c -tmt_pth $(CHECKFLAG) $(LIBS) -o mt_$@ $< 
# 	env LD_LIBRARY_PATH="/home/rhensen/bin/openblas/bin/lib/" SAC_PARALLEL="8" ./mt_test_single

# test_mt: $(TESTSACEXEC) 
# 	for x in mt_test/*.out; do echo $$x; env LD_LIBRARY_PATH="/home/rhensen/bin/openblas/bin/lib/" SAC_PARALLEL="8" ./$$x; done


clean: 
	rm -rf src/blas/*.o
	rm -rf host/mt-pth/*.so
	rm -rf host/seq/*.so
	rm -rf tree/host/*.so
	rm -rf ./**/*.i
	rm -rf bin/*
