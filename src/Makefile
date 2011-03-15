oberon: oberon.cc lex.yy.c  scope.h type.o
	c++ -g lex.yy.c oberon.cc type.o -o oberon
lex.yy.c: oberon.l
	lex oberon.l
oberon.cc: oberon.y
	bison -d oberon.y -o oberon.cc
type.o: type.cpp
	c++ -g -c type.cpp -o type.o
clean:
	rm lex.yy.o lex.yy.c oberon.cc oberon.hh oberon
