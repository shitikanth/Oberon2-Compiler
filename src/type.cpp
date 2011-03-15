/*HEADER{{{
 * =============================================================
 *       Filename:  type.cpp
 *        Created:  Monday 14 March 2011 06:52:34  IST
 *         Author:  Shitikanth (), shiti@iitk.ac.in
 *        Company:  IIT Kanpur
 * =============================================================
 }}} */
#include "type.h"
bool CheckEquivalence(TypeSpecifier * type1, TypeSpecifier * type2){
  if(type1==NULL && type2==NULL)
    return true;
  if(type1==NULL || type2==NULL)
    return false;
  if(type1->node==type2->node){
    if(type1->n==type2->n){
    }
  }
  return false;
}

