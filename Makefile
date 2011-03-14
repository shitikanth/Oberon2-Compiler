oberon: lex.yy.o oberon.cc
	c++ lex.yy.o oberon.cc -o oberon
lex.yy.o: lex.yy.c
	cc -c lex.yy.c -o lex.yy.o
lex.yy.c: oberon.l
	lex oberon.l
oberon.cc: oberon.y
	bison -d oberon.y -o oberon.cc
