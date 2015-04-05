#Executable
EXEC=test

#Compiler
CXX=clang++

#Includes directories
IDIR=include/

#Compiler options
IDIRFLAG=$(foreach idir, $(IDIR), -I$(idir))
EXECFLAGS=-o $(EXEC)
CXXFLAGS=-std=c++11 $(IDIRFLAGS) $(EXECFLAGS) -g -Wall -W


test: src/Date.cpp src/main.cpp
	$(CXX) -o test -I include/ -std=c++11 src/Date.cpp src/main.cpp

clean:
	rm test
