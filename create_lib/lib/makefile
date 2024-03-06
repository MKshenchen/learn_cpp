libsort_a.a: sort_a.o
	ar rcs $@ $^

libsort_so.so: sort_so.o
	g++ -shared -o $@ $^

sort_a.o: sort.cpp
	g++ -c $< -o $@

sort_so.o: sort.cpp
	g++ -c -fPIC $< -o $@

all: libsort_a.a libsort_so.so

.PHONY: clean
clean: 
	rm -f *.o *.a *.so
