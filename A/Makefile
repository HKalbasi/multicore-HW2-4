SRCS=$(wildcard *.cpp)

EXECUTABLES=$(SRCS:.cpp=.out)
OEXECUTABLES=$(SRCS:.cpp=.O3)

all: simple O3
simple: $(EXECUTABLES)
O3: $(OEXECUTABLES)

$(EXECUTABLES): $(SRCS)

%.out: %.cpp
	g++ -std=c++11 -isystem benchmark/include  -lbenchmark_main -lbenchmark -lpthread $<	-o $@ 

%.O3: %.cpp
	g++ -std=c++11 -isystem benchmark/include  -lbenchmark_main -lbenchmark -lpthread $<	-o $@ -O3

clean:
	rm -rf $(EXECUTABLES) $(OEXECUTABLES)

