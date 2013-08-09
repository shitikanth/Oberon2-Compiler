#ifndef SCOPEOBERON
#define SCOPEOBERON
#include <tr1/unordered_map>
#include <string>
#include <algorithm>
#include <iterator>
#include "type.hh"
#include <cstdio>


struct Entry{
  TypeSpecifier * type;
  int offset;
  int hops;
  int label; // to facilitate jump on function call
  bool used; // If a variable is unused, give a warning during compile time.
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
      table=SymbolTable();
    }

    int declare(std::string, TypeSpecifier *);
    int insertType(std::string, TypeSpecifier *);
    Entry * lookup(std::string);
    Scope * getPrev();

    void showAll();
    void deleteStuff();
};

#endif
