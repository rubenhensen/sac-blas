# SAC-BLAS Makefile
# Compiler paths
SAC2C = /Users/rubenhensen/Repos/cleanroom/sac2c/build_p/sac2c_p
SAC4C = /Users/rubenhensen/Repos/cleanroom/sac2c/build_p/sac4c_p

# macOS: use Accelerate framework for CBLAS; produces .dylib not .so
LIBS  = -Xl -framework -Xl Accelerate
CFLAGS = -Wall -DACCELERATE_NEW_LAPACK
CC = gcc
CHECKFLAG =
EXT = dylib

THREADS = 8

# Sequential module targets
Helper_seq = host/seq/libHelperMod.$(EXT)
BlasLevel1_seq = host/seq/libBlasLevel1Mod.$(EXT)
BlasLevel2_seq = host/seq/libBlasLevel2Mod.$(EXT)
BlasLevel3_seq = host/seq/libBlasLevel3Mod.$(EXT)
OpenBlas_seq = host/seq/libOpenBlasMod.$(EXT)

# Multi-threaded module targets
Helper = host/mt-pth/libHelperMod.$(EXT)
BlasLevel1 = host/mt-pth/libBlasLevel1Mod.$(EXT)
BlasLevel2 = host/mt-pth/libBlasLevel2Mod.$(EXT)
BlasLevel3 = host/mt-pth/libBlasLevel3Mod.$(EXT)
OpenBlas = host/mt-pth/libOpenBlasMod.$(EXT)

BLAS_BIN = $(patsubst src/blas/%.c, bin/blas/%.o, $(wildcard src/blas/*.c))

ROUTINE=TEST


.PHONY: test test-seq stest echo clean modules-seq modules-mt

echo:
	echo $(BLAS_BIN)

# Build all sequential modules
modules-seq: $(Helper_seq) $(BlasLevel1_seq) $(BlasLevel2_seq) $(OpenBlas_seq)

# Build all multi-threaded modules
modules-mt: $(Helper) $(BlasLevel1) $(BlasLevel2) $(OpenBlas)

# Debug targets
debug_seq: bin/sac/seq/debug.out
	./$<

bin/sac/seq/debug.out: src/sac/debug.sac bin/blas/drotmg.o
	$(SAC2C) $(CHECKFLAG) $(LIBS) -o $@ $<

debug: bin/sac/mt-pth/debug.out
	env SAC_PARALLEL=$(THREADS) ./$<

bin/sac/mt-pth/debug.out: src/sac/debug.sac bin/blas/drotmg.o
	$(SAC2C) $(CHECKFLAG) $(LIBS) -tmt_pth -o $@ $<

# Test targets
test: bin/sac/mt-pth/testing_tool.out $(OpenBlas)
	env SAC_PARALLEL=$(THREADS) ./$<

test-seq: bin/sac/seq/testing_tool.out
	./$<

# C wrapper compilation
bin/blas/%.o: src/blas/%.c
	$(CC) -c -o $@ $< $(CFLAGS) -framework Accelerate

# Sequential module builds
host/seq/libOpenBlasMod.$(EXT): src/sac/OpenBlas.sac $(BLAS_BIN)
	$(SAC2C) $(CHECKFLAG) $(LIBS) $<
host/seq/libHelperMod.$(EXT): src/sac/Helper.sac
	$(SAC2C) $(CHECKFLAG) $(LIBS) $<
host/seq/libBlasLevel1Mod.$(EXT): src/sac/BlasLevel1.sac $(Helper_seq)
	$(SAC2C) $(CHECKFLAG) $(LIBS) src/sac/BlasLevel1.sac
host/seq/libBlasLevel2Mod.$(EXT): src/sac/BlasLevel2.sac $(BlasLevel1_seq) $(Helper_seq)
	$(SAC2C) $(CHECKFLAG) $(LIBS) src/sac/BlasLevel2.sac
host/seq/libBlasLevel3Mod.$(EXT): src/sac/BlasLevel3.sac $(BlasLevel2_seq) $(BlasLevel1_seq) $(Helper_seq)
	$(SAC2C) $(CHECKFLAG) $(LIBS) src/sac/BlasLevel3.sac
bin/sac/seq/testing_tool.out: src/sac/testing_tool.sac $(OpenBlas_seq)
	$(SAC2C) $(CHECKFLAG) $(LIBS) -D ROUTINE=$(ROUTINE) -o $@ $<

# Multi-threaded module builds
host/mt-pth/libOpenBlasMod.$(EXT): src/sac/OpenBlas.sac $(BLAS_BIN)
	$(SAC2C) $(CHECKFLAG) $(LIBS) -tmt_pth $<
host/mt-pth/libHelperMod.$(EXT): src/sac/Helper.sac
	$(SAC2C) $(CHECKFLAG) $(LIBS) -tmt_pth $<
host/mt-pth/libBlasLevel1Mod.$(EXT): src/sac/BlasLevel1.sac $(Helper)
	$(SAC2C) $(CHECKFLAG) $(LIBS) -tmt_pth src/sac/BlasLevel1.sac
host/mt-pth/libBlasLevel2Mod.$(EXT): src/sac/BlasLevel2.sac $(BlasLevel1) $(Helper)
	$(SAC2C) $(CHECKFLAG) $(LIBS) -tmt_pth src/sac/BlasLevel2.sac
host/mt-pth/libBlasLevel3Mod.$(EXT): src/sac/BlasLevel3.sac $(BlasLevel2) $(BlasLevel1) $(Helper)
	$(SAC2C) $(CHECKFLAG) $(LIBS) -tmt_pth src/sac/BlasLevel3.sac
bin/sac/mt-pth/testing_tool.out: src/sac/testing_tool.sac $(BlasLevel1) $(BlasLevel2) $(BlasLevel3) $(OpenBlas) $(Helper)
	$(SAC2C) $(CHECKFLAG) $(LIBS) -tmt_pth -D ROUTINE=$(ROUTINE) -o $@ $<

# Generic sequential build
bin/sac/seq/%.out: src/sac/%.sac $(BlasLevel1_seq) $(BlasLevel2_seq) $(BlasLevel3_seq) $(Helper_seq)
	$(SAC2C) $(CHECKFLAG) $(LIBS) -o $@ $<
	@rm -rf bin/sac/*.i
	@rm -rf bin/sac/*.o
	@rm -rf bin/sac/*.c

# Generic multi-threaded build
bin/sac/mt-pth/%.out: src/sac/%.sac
	$(SAC2C) -tmt_pth $(CHECKFLAG) $(LIBS) -o $@ $<
	@rm -rf bin/sac/*.i
	@rm -rf bin/sac/*.o
	@rm -rf bin/sac/*.c

clean:
	rm -rf bin/blas/*.o
	rm -rf bin/sac/mt-pth/*.out bin/sac/mt-pth/*.i bin/sac/mt-pth/*.o bin/sac/mt-pth/*.c
	rm -rf bin/sac/seq/*.out bin/sac/seq/*.i bin/sac/seq/*.o bin/sac/seq/*.c
	rm -rf host/mt-pth/*.$(EXT) host/mt-pth/*.so
	rm -rf host/seq/*.$(EXT) host/seq/*.so
	rm -rf tree/host/*.so tree/host/seq
	rm -rf ./**/*.i
