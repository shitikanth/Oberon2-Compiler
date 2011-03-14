oberon: oberon.cc lex.yy.o  scope.h
	c++ lex.yy.o oberon.cc -o oberon
lex.yy.o: lex.yy.c
	c++ -c lex.yy.c -o lex.yy.o
lex.yy.c: oberon.l
	lex oberon.l
oberon.cc: oberon.y
	bison -d oberon.y -o oberon.cc
clean:
	rm lex.yy.o lex.yy.c oberon.cc oberon.hh oberon
