
ADD_DEFINITIONS ( -DT1_COPYCTOR_MODE="=default")

ADD_EXECUTABLE ( test1-copy-forloop 
	../common/main.cpp
	../common/T1.cpp
	../common/T2.cpp
	T2_copy_forloop.cpp
	)

SET_PROPERTY (TARGET test1-copy-forloop PROPERTY CXX_STANDARD 14)

