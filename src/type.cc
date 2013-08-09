#include "type.hh"
#include <cstdio>

std::string rev[]=
{
  "BOOLEAN",
  "CHAR",
  "SHORTINT",
  "INTEGER",
  "LONGINT",
  "REAL",
  "LONGREAL",
  "SET",
  "VOID",
  "ERROR",
  "ARRAY",
  "RECORD",
  "POINTER",
  "PROCEDURE"
};

TypeSpecifier * basicType[10];


bool CheckEquivalence(TypeSpecifier * type1, TypeSpecifier * type2){
  if(type1==NULL && type2==NULL)
    return true;
  if(type1==NULL || type2==NULL)
    return false;
  if(type1->node==type2->node){
    if(type1->n==type2->n){
      if(type1->node==tRECORD){
        for(int i=0; i<type1->n; i++)
          if(!CheckEquivalence(type1->child[i],type2->child[i])||type1->fields[i]!=type2->fields[i])
            return false;
        return true;
      }
      else if(type1->node==tARRAY){
        /*
        for(int i=0; i<type1->n; i++)
          if(type1->dimns[i]!=type2->dimns[i])
            return false;
            */
        return CheckEquivalence(type1->child[0],type2->child[0]);
      }
      else{
        for(int i=0; i<type1->n; i++)
          if(!CheckEquivalence(type1->child[i],type2->child[i]))
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



bool isArithmetic( TypeSpecifier *t)
{
	if (t->node==tSHORTINT || t->node==tINTEGER || t->node==tLONGINT || t->node==tREAL || t->node==tLONGREAL)
		return true;
	return false;
}


bool isArithComparable(TypeSpecifier *t1, TypeSpecifier *t2)
{
	if (  (t1->node==tSHORTINT || t1->node==tINTEGER || t1->node==tLONGINT || t1->node==tREAL || t1->node==tLONGREAL) &&
		  (t2->node==tSHORTINT || t2->node==tINTEGER || t2->node==tLONGINT || t2->node==tREAL || t2->node==tLONGREAL)
	   )
		return true;
	return false;
}


void TypeSpecifier::print(){
  if(node==-1)
    printf(" TYPE");
  else printf(" %s",rev[node].c_str());
  if(node==tPOINTER){
    printf(" TO");
  }
  for(int i=0; i<n; i++){
    if(child[i])
    child[i]->print();
  }
}


void typeError(int id, TypeSpecifier *t1, TypeSpecifier *t2, int line){
  switch(id){
    case 0:
      printf("Type error at line %d:\n  Found Type- ",line);
      if(t1==NULL)
        printf("NULL");
      else
        t1->print();
      printf(".\n  Expecting- ");
      if(t2==NULL)
        printf("NULL");
      else
        t2->print();
      printf(".");
      break;
    case 1:
      printf("Type error at line %d: Given types are not comparable\n",line);
      if(t1==NULL)
        printf("NULL");
      else
        t1->print();
      if(t2==NULL)
        printf("NULL");
      else
        t2->print();
      break;
    case 2:
      printf("Type error at line %d: Not arithmetic type\n",line);
      if(t1==NULL)
        printf("NULL");
      else
        t1->print();
      if(t2==NULL)
        printf("NULL");
      else
        t2->print();
  }
  printf("\n");
}

bool validateFunctionCall (TypeSpecifier * fn, TypeList * argslist, int line){
  if(fn!=basicType[tERROR]){
    if(fn->n!=argslist->size+1){
      fprintf(stderr,"Type error at line %d: invalid number of arguments to function!\n",line);
    }
    else{
      bool flag=true;
      for(int i=1; i<fn->n; i++){
        if(!CheckEquivalence(fn->child[i],argslist->head)){
          flag=false;
          printf("Invalid argument type %d.\n",i);
          typeError(0,argslist->head,fn->child[i],line);
        }
        argslist=argslist->tail;
      }
      if(!flag){
        fprintf(stderr,"Invalid function call\n");
      }
    }
  }
}
/*
 * Check if type t2 can be expanded to type t1
 */
bool TypeExpandable (TypeSpecifier *t1, TypeSpecifier *t2){
  if(t1->node<7 && t2->node<7 && t1->node>=t2->node)
    return true;
  else
    return false;
}

TypeSpecifier * assign_rel_type( TypeSpecifier *t1, TypeSpecifier *t2, int line){
    if ( (t1==basicType[tERROR]) && (t2==basicType[tERROR]) )
      return basicType[tERROR];

    if (t1==basicType[tERROR])
    {
      if (!isArithmetic(t2))
        printf("Type error at %d: Not an arithmetic type\n",line);
      return basicType[tERROR];
    }

    if (t2==basicType[tERROR])
    {
      if (!isArithmetic(t1))
        printf("Type error at %d: Not an arithmetic type\n",line);
      return basicType[tERROR];
    }

    if (isArithComparable(t1,t2))
      return basicType[tBOOLEAN];

    typeError(1,t1,t2,line);
    return  basicType[tERROR];
  }

TypeSpecifier* assign_add_type( TypeSpecifier *t1, TypeSpecifier *t2, int line)
{
  if (CheckEquivalence(t1,basicType[tINTEGER]) && CheckEquivalence(t2,basicType[tINTEGER]))
    return basicType[tINTEGER];

  else if (CheckEquivalence(t1,basicType[tREAL]) && CheckEquivalence(t2,basicType[tREAL]))
    return basicType[tREAL];

  else if ( (CheckEquivalence(t1,basicType[tINTEGER]) && CheckEquivalence(t2,basicType[tREAL])) ||
      (CheckEquivalence(t1,basicType[tREAL]) && CheckEquivalence(t2,basicType[tINTEGER]))
      )
    return basicType[tREAL];
  else
  {
    typeError(2,t1,t2,line);
    return basicType[tERROR];
  }
}

