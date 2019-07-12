main: main.cpp 
	g++ main.cpp -o main.out -Wall -Wextra -Wpedantic -O2

debug:
	g++ main.cpp -o main.out -Wall -Wextra -Wpedantic -g

clean:
	rm main.out
