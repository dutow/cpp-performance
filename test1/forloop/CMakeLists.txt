
ADD_EXECUTABLE ( test1-forloop 
	../common/main.cpp
	../common/T1.cpp
	../common/T2.cpp
	T2_forloop.cpp
	)

SET_PROPERTY (TARGET test1-forloop PROPERTY CXX_STANDARD 14)

