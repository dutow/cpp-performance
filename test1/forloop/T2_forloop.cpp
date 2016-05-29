
#include "../common/T2.h"

T2::T2(T2 const& other) {
	v.reserve(other.v.size());
	for (auto const& i : other.v) {
		v.push_back(std::move(copy(i)));
	}
}
