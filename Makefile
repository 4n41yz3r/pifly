CXX=g++
CXXFLAGS=-Wall -g -O2 
CXX_OPTS= 

INSTALL=install

PROG=pifly

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(CXX_OPTS) $< -o $@ 

$(PROG).o: sensors/sensors.a
	$(CXX) $(CXXFLAGS) -o $(PROG) \
		main.cpp \
		sensors/sensors.a

all: $(PROG)

sensors/sensors.a:
	$(MAKE) -C sensors/ 

install:
	$(INSTALL) -m 755 $(PROG) $(DESTDIR)/usr/local/bin/

clean:
	cd sensors && $(MAKE) clean
	rm -rf *.o *~ *.mod
	rm -rf $(PROG)
