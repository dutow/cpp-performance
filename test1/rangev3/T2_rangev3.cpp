
#include "../common/T2.h"

#include "range/v3/all.hpp"

T2::T2(T2 const& other) : v(other.v | ranges::v3::view::transform(copy)) {}
