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
#define tVOID        8
//DERIVED TYPES
#define tARRAY       9
#define tRECORD      10
#define tPOINTER     11
#define tPROCEDURE   12

#include <string>

class TypeSpecifier{
  public:
    int node; // Contains the type constructor if it is a derived type or the basic type.
    int n;    // Number of children (from which the type is derived)
    // if node = -1, type is "TYPE"
    // then the the TypeSpecifier represents the TYPE value
    TypeSpecifier **child;
    std::string *fields; //optional (used for records)
    int width;
    TypeSpecifier(int nd=-1){
      n=0;
      child=NULL;
      fields=NULL;
      node=nd;
      width=0;
    }
    ~TypeSpecifier(){
      for(int i=0; i<n; i++)
        delete child[i];
       delete fields;
    }
    void print();
};

bool CheckEquivalence(TypeSpecifier * type1, TypeSpecifier * type2);
bool CheckEquivalence(void * type1, void * type2);
#endif

