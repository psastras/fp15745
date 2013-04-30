CXX = clang
all: 
	make -j5 -C llvm_prof
	#make -j5 -C llvm_norm

run:
	$(CXX) -emit-llvm -O0 -c test1.cpp -o test1.bc

	opt -q -f -insert-edge-profiling test1.bc -o test1_prof.ssa
	mv test1_prof.ssa test1_prof.bc
	./llc_prof test1_prof.bc
	$(CXX) -lstdc++ -Lllvm_prof/Release+Asserts/lib/ -lprofile_rt -Wl,-rpath,'$ORIGIN/lib' test1_prof.s -o test1_prof
	./test1_prof 50 5
	llvm-prof test1_prof.bc

	opt -mem2reg test1.bc > test1.ssa
	mv test1.ssa test1.bc
	./llc_prof -regalloc=basic test1.bc -o test1_profile.s
	$(CXX) -lstdc++ test1_profile.s -o test1_profile
	./llc_norm -regalloc=basic test1.bc -o test1_normal.s
	$(CXX) -lstdc++ test1_normal.s -o test1_normal
clean:
	rm *.s *.bc *.out
	
.PHONY: clean all