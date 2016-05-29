
#pragma once

#include <vector>

#include "T1.h"

#ifndef T2_COPYCTOR_MODE
#define T2_COPYCTOR_MODE
#endif

class T2 {
       public:
	T2(int size, int seed);
	T2(T2 const& other) T2_COPYCTOR_MODE;

	int access(int idx) const;

       private:
	std::vector<T1> v;
};
