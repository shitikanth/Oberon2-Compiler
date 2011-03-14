
#include <tr1/unordered_map>
#include <string>
#include <algorithm>
#include <iterator>
#include "type.h"

#ifndef SCOPEOBERON
#define SCOPEOBERON

struct Entry{
  TypeSpecifier * type;
  void * value;
};

typedef std::tr1::unordered_map<std::string, Entry *> SymbolTable;
typedef SymbolTable::iterator TableIterator;


class Scope{
  private: 
    SymbolTable table;
    Scope *prev;
  public:
    Scope(Scope *p=NULL){
      prev=p;
    }
    void declare(std::string, TypeSpecifier);
    Entry * lookup(std::string);
    void showAll();
};

#endif
