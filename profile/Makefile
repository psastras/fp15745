all: prof

CXXFLAGS = $(shell llvm-config --cxxflags) -g -O0

prof: prof.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@ \
	-L$(shell llvm-config --libdir) \
	$(shell llvm-config --libs instrumentation bitreader) \
	$(shell llvm-config --ldflags)

bwt: bwt.o blocksort.o bzlib.o

clean:
	rm -f *.o *~ prof bwt
