CXX=clang

REG_ALLCS = 'basic' \
			'greedy' \
			'pbqp'

 REG_ALLCS = 'basic' 

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
			'heapsort 50000000' \
			'raytracer 500' \
			'oggenc -Q -q10 $(CURDIR)/jfk_1963_0626_berliner.wav' \
			'bzip2 --best -k -f $(CURDIR)/gcc.txt'



# EXEC_CMDS = 'ary 10'
#EXEC_CMDS = 'oggenc -Q -q10 $(CURDIR)/jfk_1963_0626_berliner.wav'
.PRECIOUS: instrument/%.bc instrument/%.mr.bc instrument/%.edge.bc
instrument/r_% : instrument/%.bbc.s
	$(CXX) -lstdc++ -L../llvm_norm/Release+Asserts/lib/ -lprofile_rt -Wl,-rpath,'$(ORIGIN)/lib' $< -o $@		
instrument/% : instrument/%.edge.s 
	$(CXX) -lstdc++ -L../llvm_norm/Release+Asserts/lib/ -lprofile_rt -Wl,-rpath,'$(ORIGIN)/lib' $< -o $@		
instrument/%.edge.bc : instrument/%.bc
	opt -q -f -insert-edge-profiling $< -o $@
instrument/%.bbc.bc : instrument/%.bc
	../opt_rand -name-bb $< -o $@
instrument/%.mr.bc : instrument/%.bc
	opt -mem2reg $< > $@
instrument/%.bbc.s : instrument/%.bbc.bc
	../llc_rand -regalloc=basic $<
instrument/%.edge.s : instrument/%.edge.bc
	llc $<
instrument/%.bc : %.c
	$(CXX) -w -emit-llvm -O0 -c $< -o $@
instrument/%.bc : %.cpp
	$(CXX) -w -emit-llvm -O0 -c $< -o $@
instrument: $(addprefix instrument/, $(basename $(wildcard *.c *.cpp))) $(addprefix instrument/r_, $(basename $(wildcard *.c *.cpp)))
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
	echo '\t'$$j; \
	../llc_norm -regalloc=$$j instrument/$$1.bc -o $$1.s >> /dev/null; \
	$(CXX) -lstdc++ $$1.s -o 'norm/'$$j'_'$$1; \
	done; \
	rm $$1.s; \
	done;
bench_norm:
	@TIMEFORMAT=%R; \
	COUNTER=1; \
	while [[ $$COUNTER -le 10 ]]; do \
	for i in $(EXEC_CMDS); do \
	set -- $$i; \
	echo 'Benchmarking '$$1; \
	for j in $(REG_ALLCS); do \
	../opt_rand -name-bb 
	printf "%s\t%s\t" "$$i" "$$j" >> bench_norm.txt; \
	./timer "'norm/'$$j'_'$$i >> /dev/null" 2>> bench_norm.txt; \
	done; \
	done; \
	((COUNTER = COUNTER + 1)); \
	done

bench_prof:
	@TIMEFORMAT=%R; \
	COUNTER=1; \
	while [[ $$COUNTER -le 10 ]]; do \
	for i in $(EXEC_CMDS); do \
	set -- $$i; \
	echo 'Benchmarking '$$1; \
	for j in $(REG_ALLCS); do \
	printf "%s\t%s\t" "$$i" "$$j" >> bench_prof.txt; \
	./timer "'prof/'$$j'_'$$i >> /dev/null" 2>> bench_prof.txt; \
	done; \
	done; \
	((COUNTER = COUNTER + 1)); \
	done
bench_rand:
	@TIMEFORMAT=%R; \
	for i in $(EXEC_CMDS); do \
	set -- $$i; \
	echo 'Benchmarking '$$1; \
	for j in $(REG_ALLCS); do \
	rm .weight_history; \
	COUNTER=1; \
	while [[ $$COUNTER -le 10 ]]; do \
	echo 'k'; \
	rm instrument/r_$$1; \
	make instrument; \
	printf "%s\t%s\t" "$$i" "$$j" >> bench_rand.txt; \
	./timer "'instrument/r_'$$i >> /dev/null" 2>> bench_rand.txt; \
	((COUNTER = COUNTER + 1)); \
	done; \
	done; \
	done

bench: bench_prof bench_norm
all: instrument profile regalloc bench
clean_bench: 
	rm bench_prof.txt bench_norm.txt
clean:
	rm instrument/*

