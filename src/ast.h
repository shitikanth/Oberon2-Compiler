#ifndef OBERON_AST
#define OBERON_AST
#include <string>
class Ast{
  int op;
  Ast *c1, *c2;
  std::string id;
  public:
    Ast(int OP, Ast *C1=NULL, Ast *C2=NULL){
      op=OP;
      c1=C1;
      c2=C2;
    }
};
#endif
