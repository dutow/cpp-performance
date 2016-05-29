
ADD_DEFINITIONS ( -DT2_COPYCTOR_MODE="=default")
ADD_DEFINITIONS ( -DT1_COPYCTOR_MODE="=default")

ADD_EXECUTABLE ( test1-copyable 
	../common/main.cpp
	../common/T2.cpp
	../common/T1.cpp
	)

SET_PROPERTY (TARGET test1-copyable PROPERTY CXX_STANDARD 14)

