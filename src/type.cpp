/*HEADER{{{
 * =============================================================
 *       Filename:  type.cpp
 *        Created:  Monday 14 March 2011 06:52:34  IST
 *         Author:  Shitikanth (), shiti@iitk.ac.in
 *        Company:  IIT Kanpur
 * =============================================================
 }}} */
#include "type.h"
#include <cstdio>
std::string rev[]= { "BOOLEAN", "CHAR", "SHORTINT", "INTEGER", "LONGINT", "REAL", "LONGREAL", "SET", "VOID", "ARRAY", "RECORD", "POINTER", "PROCEDURE"};
bool CheckEquivalence(TypeSpecifier * type1, TypeSpecifier * type2){
  if(type1==NULL && type2==NULL)
    return true;
  if(type1==NULL || type2==NULL)
    return false;
  if(type1->node==type2->node){
    if(type1->n==type2->n){
      if(type1->node!=tRECORD){
        for(int i=0; i<type1->n; i++)
          if(!CheckEquivalence(type1->child[i],type2->child[i]))
            return false;
        return true;
      }
      else{
        for(int i=0; i<type1->n; i++)
          if(!CheckEquivalence(type1->child[i],type2->child[i])||type1->fields[i]!=type2->fields[i])
            return false;
        return true;
      }
    }
  }
  return false;
}

bool CheckEquivalence(void * type1, void * type2){
  return CheckEquivalence((TypeSpecifier *) type1, (TypeSpecifier *) type2);
}

void TypeSpecifier::print(){
  if(node==-1)
    printf("TYPE\n");
  else printf("%s\n",rev[node].c_str());
  printf("Children:\n");
  for(int i=0; i<n; i++){
    if(child[i])
    child[i]->print();
  }
  printf("-----\n");
}
