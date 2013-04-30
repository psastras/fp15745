CXX=clang

REG_ALLCS = 'basic' \
			'greedy' \
			'pbqp'

# EXEC_CMDS = 'ary 200000' \
# 			'ackermann 11' \
# 			'chameneos 100000' \
# 			'echo 100000' \
# 			'fannkuch 10' \
# 			'except 1000000' \
# 			'fibo 42' \
# 			'harmonic 1000000000' \
# 			'hash2 2000' \
# 			'heapsort 20000000'

EXEC_CMDS = 'ary 300000' \
			'ackermann 12' \
			'chameneos 200000' \
			'echo 200000' \
			'fannkuch 11' \
			'except 2000000' \
			'fibo 44' \
			'harmonic 1500000000' \
			'hash2 3000' \
			'heapsort 50000000'

.PRECIOUS: instrument/%.bc instrument/%.mr.bc instrument/%.edge.bc

instrument/% : instrument/%.edge.s instrument/%.mr.bc
	$(CXX) -lstdc++ -L../llvm_norm/Release+Asserts/lib/ -lprofile_rt -Wl,-rpath,'$(ORIGIN)/lib' $< -o $@		
instrument/%.edge.bc : instrument/%.bc
	opt -q -f -insert-edge-profiling $< -o $@
instrument/%.mr.bc : instrument/%.bc
	opt -mem2reg $< > $@
instrument/%.edge.s : instrument/%.edge.bc
	llc $<
instrument/%.bc : %.cpp
	$(CXX) -emit-llvm -O0 -c $< -o $@
instrument: $(addprefix instrument/, $(basename $(wildcard *.cpp)))
profile: instrument
	@for i in $(EXEC_CMDS); do \
	set -- $$i; \
	echo 'Profiling '$$1; \
	instrument/$$i >> /dev/null; \
	mv llvmprof.out $$1.out; \
	done; 
regalloc: 
	@for i in $(EXEC_CMDS); do \
	set -- $$i; \
	echo 'Generating executables for '$$1; \
	EXE=$$1; \
	cp $$1.out llvmprof.out; \
	for j in $(REG_ALLCS); do \
	echo '\t'$$j; \
	../llc_prof -regalloc=$$j instrument/$$1.bc -o $$1.s >> /dev/null; \
	$(CXX) -lstdc++ $$1.s -o 'prof/'$$j'_'$$1; \
	../llc_norm -regalloc=$$j instrument/$$1.bc -o $$1.s >> /dev/null; \
	$(CXX) -lstdc++ $$1.s -o 'norm/'$$j'_'$$1; \
	done; \
	rm $$1.s; \
	done;
bench_norm:
	@TIMEFORMAT=%R; \
	for i in $(EXEC_CMDS); do \
	set -- $$i; \
	echo 'Benchmarking '$$1; \
	for j in $(REG_ALLCS); do \
	printf "%s\t%s\t" "$$i" "$$j" >> bench_norm.txt; \
	{ time 'norm/'$$j'_'$$i > /dev/null; >stdout >stderr; } 2>> bench_norm.txt; \
	done; \
	done;

bench_prof:
	@TIMEFORMAT=%R; \
	for i in $(EXEC_CMDS); do \
	set -- $$i; \
	echo 'Benchmarking '$$1; \
	for j in $(REG_ALLCS); do \
	printf "%s\t%s\t" "$$i" "$$j" >> bench_prof.txt; \
	{ time 'prof/'$$j'_'$$i > /dev/null; >stdout >stderr; } 2>> bench_prof.txt; \
	done; \
	done;

bench: bench_prof bench_norm
all: instrument profile regalloc bench
clean_bench: 
	rm bench_prof.txt bench_norm.txt
clean:
	rm instrument/*

