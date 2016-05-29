
#include "T2.h"

#include <random>

T2::T2(int size, int seed) {
	std::mt19937 gen;
	gen.seed(seed);
	std::uniform_int_distribution<> dis(1, size);

	int r1 = dis(gen);
	int r2 = dis(gen);
	v.reserve(size);
	for (int i = 0; i < size; ++i) v.push_back(T1(i + r1 + 3 * r2));
}

int T2::access(int idx) const { return v[idx].i; }
