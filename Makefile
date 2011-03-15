oberon: lex.yy.o oberon.cc
	c++ lex.yy.c oberon.cc -o oberon
lex.yy.c: oberon.l
	lex oberon.l
oberon.cc: oberon.y
	bison -d oberon.y -o oberon.cc
