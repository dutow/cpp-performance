
#include "../common/T2.h"

#include <vector>

template <typename T>
std::vector<T> movevec(std::vector<T> const& orig, T (*copier)(T const&)) {
	std::vector<T> local;
	local.reserve(orig.size());
	for (auto const& i : orig) {
		local.push_back((copier(i)));
	}
	return local;
}

T2::T2(T2 const& other) : v(std::move(movevec(other.v, copy))) {}
