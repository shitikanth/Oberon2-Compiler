
LEX     = flex
YACC    = bison -y
YFLAGS  = -d
CC		= g++ -g

all: oberon2

objects : type.o scope.o

oberon2: oberon.cc oberon.hh lex.yy.c objects
	$(CC) -o oberon2 oberon.cc lex.yy.c *.o

lex.yy.c: oberon.l
	flex -o lex.yy.c oberon.l

oberon.cc oberon.hh: oberon.y
	bison -d oberon.y -o oberon.cc

type.o: type.cc type.hh
	$(CC) -c type.cc

scope.o: scope.cc scope.hh
	$(CC) -c scope.cc

clean:
	rm -rf *.o oberon.cc oberon.hh lex.yy.c oberon2
