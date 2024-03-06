build: main_a main_so

main_a: main.cpp
	    g++ $^ -o $@ -L../lib/ -lsort_a

main_so: main.cpp
	    g++ $^ -o $@ -L../lib/ -lsort_so -Wl,-rpath=../lib/

.PHONY: clean
clean:
	rm -f main_a main_so
