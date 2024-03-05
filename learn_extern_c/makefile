elf = test_extern

$(elf): test_extern.o mycfunc.o
	g++ $^ -o $@
test_extern.o: test_extern.cpp mycfunc.h
	g++ -c $< -o $@
mycfunc.o: mycfunc.c mycfunc.h
	gcc -c $< -o $@

.PHONY: clean
clean: 
	rm -f $(elf) *.o
