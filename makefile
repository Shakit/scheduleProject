#Executable
EXEC=test

#Compiler
CXX=clang++

#Includes directories
IDIR=include/

#Compiler options
IDIRFLAG=$(foreach idir, $(IDIR), -I$(idir))
CXXFLAGS=-std=c++11 $(IDIRFLAG) -g -W -Wall -Wextra -Wpedantic


test: src/Date.cpp src/main.cpp
	$(CXX) -o $(EXEC) $(CXXFLAGS) src/Date.cpp src/main.cpp

clean:
	rm test
