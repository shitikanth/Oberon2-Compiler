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
//ERROR TYPE 	
#define tERROR 		 9
//DERIVED TYPES
#define tARRAY       10
#define tRECORD      11
#define tPOINTER     12
#define tPROCEDURE   13


#include <string>
class TypeSpecifier{
  public:
    int node;               // Contains the type constructor if it is a derived type or the basic type.
                            // if node = -1, type is "TYPE"
    int n;                  // Number of children (from which the type is derived)
                            // If type is "ARRAY", n represents the dimension of the array.

    TypeSpecifier **child;
    std::string *fields;    //optional (used for records)
    int *dimns;             //optional (used for arrays)
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

struct TypeList{
  TypeSpecifier * head;
  TypeList * tail;
  int size;
};

extern TypeSpecifier * basicType[10];
bool CheckEquivalence(TypeSpecifier * type1, TypeSpecifier * type2);
bool CheckEquivalence(void * type1, void * type2);
bool validateFunctionCall(TypeSpecifier * fntype, TypeList* arglist,int line);
bool isArithmetic( TypeSpecifier *t);
bool TypeExpandable (TypeSpecifier * t1, TypeSpecifier * t2);
bool isArithComparable(TypeSpecifier *t1, TypeSpecifier *t2);
void typeError(int id, TypeSpecifier *t1, TypeSpecifier *t2, int line);
TypeSpecifier * assign_rel_type( TypeSpecifier *t1, TypeSpecifier *t2, int line);
TypeSpecifier * assign_add_type( TypeSpecifier *t1, TypeSpecifier *t2, int line);
#endif

