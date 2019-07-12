hello.o: hello.cpp hello.hpp
	g++ hello.cpp -c -o hello.o

hello: hello.o
	g++ hello.o -o hello

.PHONY: clean

clean:
	rm hello.o hello
