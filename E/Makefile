SRCS=$(wildcard *.cpp)

OEXECUTABLES=$(SRCS:.cpp=.O3)

all: O3
O3: $(OEXECUTABLES)

%.O3: %.cpp
	g++ -std=c++11 -isystem benchmark/include  -lbenchmark_main -lbenchmark -lpthread $<	-o $@ -O3

clean:
	rm -rf $(OEXECUTABLES)
