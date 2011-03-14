
#include <tr1/unordered_map>
#include <string>
#include <algorithm>
#include <iterator>
#include "type.h"
#include <cstdio>

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
    void declare(std::string, TypeSpecifier *);
    Entry * lookup(std::string);
    void showAll();
};

void Scope::declare(std::string id, TypeSpecifier *t){
  if(table.find(id)==table.end()){
    //Raise exception
    ;
  }
  Entry *entry= new Entry();
  entry->type=t;
  table.insert(make_pair(id,entry));
}

Entry * Scope::lookup(std::string id){ 
  TableIterator it;
  it=table.find(id);
  if(it!=table.end())
    return it->second;
  if(prev==NULL)
    return NULL;
  return prev->lookup(id);
}


void Scope::showAll(){
  TableIterator it;
  printf("Showing contents of Symbol Table\n");
  int i=0;
  for(it=table.begin(); it!=table.end(); it++){
    printf("%d - %s\n", ++i, it->first.c_str());
  }
}
#endif
