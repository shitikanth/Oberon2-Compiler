/*HEADER{{{
 * =============================================================
 *       Filename:  ast.h
 *        Created:  Monday 14 March 2011 10:03:45  IST
 *         Author:  Shitikanth (), shiti@iitk.ac.in
 *        Company:  IIT Kanpur
 * =============================================================
 }}} */
#ifndef OBERON_AST
#define OBERON_AST
//#include "oberon.hh"
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
