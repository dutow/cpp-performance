
#include "range/v3/all.hpp"

#include <iostream>
#include "T2.h"

int main(int argc, char** argv) {
	if (argc < 4) {
		std::cerr << "Requires 3 arguments: size, seed, loop"
			  << std::endl;
	}
	int size = std::stoi(argv[1]);
	int seed = std::stoi(argv[2]);
	int loop = std::stoi(argv[3]);
	T2 base(size, seed);
	volatile int ii = 0;
	for (int i = 0; i < loop; ++i) {
		T2 tmp(base);
		ii += tmp.access(size - 1);
	}
	std::cout << ii << std::endl;
}
