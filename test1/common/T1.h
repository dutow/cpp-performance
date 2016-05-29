
#pragma once

#ifndef T1_COPYCTOR_MODE
#define T1_COPYCTOR_MODE = delete
#endif

struct T1 {
	T1(int i) : i(i) {}
	T1(T1 const& o) T1_COPYCTOR_MODE;

	T1(T1&& o) = default;
	T1& operator=(T1&& o) = default;

	int i;
};

T1 copy(T1 const& o);
