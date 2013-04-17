CXX = clang
all: 
	make -j5 -C llvm-3.1.src

run:
	$(CXX) -emit-llvm -O0 -c test1.cpp -o test1.bc
	opt -mem2reg test1.bc > test1.ssa
	mv test1.ssa test1.bc
	./llc -regalloc=profile test1.bc -o test1_profile.s
	$(CXX) -lstdc++ test1_profile.s -o test1_profile
clean:
	rm pgra.so
.PHONY: clean all