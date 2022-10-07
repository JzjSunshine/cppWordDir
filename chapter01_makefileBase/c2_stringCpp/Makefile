cc = g++
OBJS = StringTest.o String.o

StringTest:$(OBJS)
	cc -o StringTest $(OBJS)
StringTest.o:StringTest.cpp String.h
	cc -c StringTest.cpp
String.o:String.cpp String.h
	cc -c String.cpp
clean:
	rm StringTest $(OBJS)
