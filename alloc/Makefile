CXX = clang
all: 
	make -j5 -C llvm_prof
	
run:
	@cd bench; \
	make all; \
	cd ..; 
clean:
	rm *.s *.bc *.out
	
.PHONY: clean all