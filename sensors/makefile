CXX=g++
AR=ar
CXXFLAGS=-Wall -g -O2
CXX_OPTS=-c

SOURCES=sensor.cpp marg.cpp ahrs.cpp
OBJECTS=$(SOURCES:.cpp=.o)

LIB=sensors.a

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(CXX_OPTS) $< -o $@ 

$(LIB): $(OBJECTS) 
	$(AR) rcs $(LIB) $(OBJECTS) 

all: $(LIB)

clean:
	rm -rf *.o
	rm -rf $(LIB)