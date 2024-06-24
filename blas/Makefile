LIBS  = -Xl -L/home/rhensen/bin/openblas/bin/lib/ -Xl -lopenblas
CFLAGS = -Wall -L/home/rhensen/bin/openblas/bin/lib/ -lopenblas
CC = gcc
CHECKFLAG = -check tc -ecc

THREADS = 8

# Target for cuda -tcuda 

Helper = host/seq/libHelperMod.so tree/host/libHelperTree.so
BlasLevel1 = host/seq/libBlasLevel1Mod.so tree/host/libBlasLevel1Tree.so
BlasLevel2 = host/seq/libBlasLevel2Mod.so tree/host/libBlasLevel2Tree.so
OpenBlas = host/seq/libOpenBlasMod.so tree/host/libOpenBlasTree.so
BLAS_BIN = $(wildcard bin/blas/%.o)

ROUTINE=TEST


.PHONY: test test-seq stest

stest: 
	sbatch long make test

test: bin/sac/mt-path/testing_tool.out
	env LD_LIBRARY_PATH="/home/rhensen/bin/openblas/bin/lib/" SAC_PARALLEL=$(THREADS) ./$<

test-seq: bin/sac/seq/testing_tool.out
	env LD_LIBRARY_PATH="/home/rhensen/bin/openblas/bin/lib/" ./$<

bin/blas/%.o: bin/blas/%.c
	$(CC) -c -o $@ $< $(CFLAGS)

host/seq/libOpenBlasMod.so tree/host/libOpenBlasTree.so &: src/sac/OpenBlas.sac $(BLAS_BIN)
	sac2c $(CHECKFLAG) $(LIBS) -o $@ $< 

host/mt-path/libOpenBlasMod.so: src/sac/OpenBlas.sac $(BLAS_BIN)
	sac2c $(CHECKFLAG) $(LIBS) -tmt_pth -o $@ $< 

host/seq/libBlasLevel1Mod.so tree/host/libBlasLevel1Tree.so &: $(Helper)
	sac2c $(CHECKFLAG) $(LIBS) -o $@ $< 

host/mt-path/libBlasLevel1Mod.so: $(BlasLevel1) $(Helper)
	sac2c $(CHECKFLAG) $(LIBS) -tmt_pth -o $@ $< 

host/seq/libBlasLevel2Mod.so tree/host/libBlasLevel2Tree.so &: $(BlasLevel1) $(Helper)
	sac2c $(CHECKFLAG) $(LIBS) -o $@ $< 

host/mt-path/libBlasLevel2Mod.so: $(Helper)
	sac2c $(CHECKFLAG) $(LIBS) -tmt_pth -o $@ $< 

bin/sac/seq/testing_tool.out: $(BlasLevel1) $(BlasLevel2) $(OpenBlas) $(Helper) 
	sac2c $(CHECKFLAG) $(LIBS) -D ROUTINE=$(ROUTINE) -o $@ $<

bin/sac/mt-path/testing_tool.out: $(BlasLevel1) $(BlasLevel2) $(OpenBlas) $(Helper) 
	sac2c $(CHECKFLAG) $(LIBS) -D ROUTINE=$(ROUTINE) -o $@ $<

bin/sac/seq/%.out: src/sac/%.sac
	sac2c $(CHECKFLAG) $(LIBS) -o $@ $< 
	@rm -rf bin/sac/*.i
	@rm -rf bin/sac/*.o
	@rm -rf bin/sac/*.c

bin/sac/mt-path/%.out: src/sac/%.sac
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
	rm -rf ./**/*.o
	rm -rf ./**/*.i
	rm -rf ./**/*.out
	rm -rf ./bin/sac/**/*.c
	rm -rf ./**/*.so
