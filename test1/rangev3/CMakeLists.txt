
ADD_EXECUTABLE ( test1-rangev3 
	../common/main.cpp
	../common/T1.cpp
	../common/T2.cpp
	T2_rangev3.cpp
	)

SET_PROPERTY (TARGET test1-rangev3 PROPERTY CXX_STANDARD 14)

