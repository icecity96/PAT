PROGRAM=$(shell ls *.cpp | sed 's/\.cpp//')
CXX=clang++
CXXFLAGS= -g -std=c++11
all:$(PROGRAM)
$(PROGRAM):%:%.cpp
	$(CXX) -c $(CXXFLAGS) $< -o $@
clean:
	rm -rf $(PROGRAM)
