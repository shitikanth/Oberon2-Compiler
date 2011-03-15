/*HEADER{{{
 * =============================================================
 *       Filename:  type.h
 *        Created:  Monday 14 March 2011 03:16:04  IST
 *         Author:  Shitikanth (), shiti@iitk.ac.in
 *        Company:  IIT Kanpur
 * =============================================================
 }}} */

#ifndef OBERON_TYPES
#define OBERON_TYPES

//BASIC TYPES
#define tBOOLEAN     0
#define tCHAR        1
#define tSHORTINT    2
#define tINTEGER     3
#define tLONGINT     4
#define tREAL        5
#define tLONGREAL    6
#define tSET         7
//DERIVED TYPES
#define tARRAY       8
#define tRECORD      9
#define tPOINTER     10
#define tPROCEDURE   11

#include <string>
class TypeSpecifier{
  public:
    int node; // Contains the type constructor if it is a derived type or the basic type.
    int n;    // Number of children (from which the type is derived)
    // if 
    TypeSpecifier *child;
    std::string *fields; //optional (used for records)
    int width;
    TypeSpecifier(int nd=-1){
      n=0;
      child=NULL;
      fields=NULL;
      node=nd;
    }
};

bool CheckEquivalence(TypeSpecifier * type1, TypeSpecifier * type2);
#endif

