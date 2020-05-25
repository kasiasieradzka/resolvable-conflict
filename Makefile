all: src/*.cpp inc/*.hpp
	g++ -std=c++17 -Wall -Wextra -pedantic -Wconversion -Werror -Idir src/*.cpp -o main
main: main.cpp functions.cpp functions.hpp
	g++ -std=c++17 main.cpp functions.cpp -o main
