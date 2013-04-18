all: prof

CXXFLAGS = $(shell llvm-config --cxxflags) -g -O0

prof: prof.o RegAllocProfileInfo.o
	$(CXX) $(CXXFLAGS) $^ -o $@ \
	-L$(shell llvm-config --libdir) \
	$(shell llvm-config --libs instrumentation bitreader) \
	$(shell llvm-config --ldflags)

clean:
	rm -f *.o *~ prof
