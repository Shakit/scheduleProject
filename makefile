test: src/Date.cpp src/main.cpp
	clang++ -o test -I include/ -std=c++11 src/Date.cpp src/main.cpp

clean:
	rm test
