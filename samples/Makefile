LIBPATH=/usr/local/lib

BOOST_INCLUDE=/usr/local/include/boost
LIBS=$(LIBPATH)/libboost_regex-mt.a

all:
	g++ -O sample.cpp -o sample.bin -I$(BOOST_INCLUDE) -L$(LIBPATH) $(LIBS)
	g++ -O nested-array.cpp -o nested-array.bin -I$(BOOST_INCLUDE) -L$(LIBPATH) $(LIBS)
	g++ -O escape-sequence.cpp -o escape-sequence.bin -I$(BOOST_INCLUDE) -L$(LIBPATH) $(LIBS)
