CC = clang
CFLAGS = -flto -c
LDFLAGS = -L$(shell llvm-config --libdir) -lprofile_rt 

include $(target).mk

all: llvmprof.out

llvmprof.out: $(target) $(target).bc
	./$(target)

$(target): $(objects)
	$(CC) $(LDFLAGS) -o $@ $(objects)

%.i.bc: %.bc
	opt -insert-edge-profiling -o $@ $^

%.bc: %.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f *.bc *.out $(target)
