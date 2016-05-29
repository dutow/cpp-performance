
#include <iostream>
#include <vector>

#include "range/v3/all.hpp"

struct T1 {
	T1(int i) : i(i) {}
	T1(T1 const& o) = delete;
	T1(T1&& o) = default;
	int i;

	T1& operator=(const T1&) = default;
};

T1 copy(T1 const& o) { return T1(o.i); }

class T2 {
       public:
	T2(int a, int p) {
		for (int i = 0; i < 1000000 * a; ++i)
			v.push_back(T1(p + i + i / 2));
	}
	T2(T2 const& other) : v(other.v | ranges::view::transform(copy)) {}

	std::vector<T1> v;
};

int main(int argc, char** argv) {
	int ii = 0;
	for (int i = 1; i < argc; ++i) {
		const int iii = std::stoi(argv[i]);
		T2 a(argc, iii);
		T2 b(a);
		ii += (b.v[iii]).i;
	}
	std::cout << ii << std::endl;
}
