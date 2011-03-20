all: oberon2

oberon2: oberon.cc oberon.tab.c lex.yy.c scope.h type.o
	c++ -g lex.yy.c oberon.cc type.o -o oberon2
	
lex.yy.c: oberon.l
	lex oberon.l
	
oberon.cc: oberon.y
	bison -d oberon.y -o oberon.cc

oberon.tab.c: oberon.y
	bison -d oberon.y -o oberon.cc
	
type.o: type.cpp type.h
	c++ -g -c type.cpp -o type.o
	
clean:
	rm -rf *.o oberon2
