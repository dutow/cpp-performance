
ADD_EXECUTABLE ( test1-movevec 
	../common/main.cpp
	../common/T1.cpp
	../common/T2.cpp
	T2_movevec.cpp
	)

SET_PROPERTY (TARGET test1-movevec PROPERTY CXX_STANDARD 14)

