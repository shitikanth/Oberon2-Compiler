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
#define INT 0
#include <string.h>
class TypeSpecifier{
  public:
    int node; // Contains the type constructor if it is a derived type or the basic type.
    int n;    // Number of children (from which the type is derived)
              // If node is ARRAY, n is the size of array with the understanding that there
              // is exactly one type from which it is derived.
    TypeSpecifier *child;
//    std::string *names; //optional (used for records)
};









#endif

