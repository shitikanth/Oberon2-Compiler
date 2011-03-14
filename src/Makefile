oberon: oberon.cc lex.yy.o  scope.o
	c++ lex.yy.o scope.o oberon.cc -o oberon
lex.yy.o: lex.yy.c
	c++ -c lex.yy.c -o lex.yy.o
lex.yy.c: oberon.l
	lex oberon.l
oberon.cc: oberon.y
	bison -d oberon.y -o oberon.cc
scope.o: scope.h scope.cpp type.h
	c++ -c scope.cpp -o scope.o
clean:
	rm lex.yy.o lex.yy.c oberon.cc oberon.hh oberon
