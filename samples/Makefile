# Makefile for Mac OSX
INCPATH=/opt/local/include
LIBPATH=/opt/local/lib

INCLUDE=-I$(INCPATH)/boost
LIBS=$(LIBPATH)/libboost_regex-mt.a

all:
	g++ -O sample.cpp -o sample $(INCLUDE) $(LIBS)
	g++ -O nested-array.cpp -o nested-array $(INCLUDE) $(LIBS)
	g++ -O escape-sequence.cpp -o escape-sequence $(INCLUDE) $(LIBS)
