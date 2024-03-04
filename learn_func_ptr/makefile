cxx = g++
cxxflags = -std=c++11

srcs = $(wildcard *.cpp)
objs = $(srcs:%.cpp=%)

all: $(objs)

%: %.cpp
	$(cxx) $(cxxflags) $< -o $@

.PHONY: clean
clean:
	rm -f $(objs)
