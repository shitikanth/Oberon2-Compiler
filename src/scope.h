
#ifndef SCOPEOBERON
#define SCOPEOBERON
#include <tr1/unordered_map>
#include <string>
#include <algorithm>
#include <iterator>
#include "type.h"
#include <cstdio>


struct Entry{
  TypeSpecifier * type;
  int offset;
  int hops;
  int label;
  bool used;		// If a variable is unused, give a warning during compile time.
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
    Scope * getPrev(){
      return prev;
    }
    
    void showAll();
    void deleteStuff();
};

int Scope::declare(std::string id, TypeSpecifier *t){
  if(table.find(id)==table.end()){
    Entry *entry= new Entry();
    entry->type=t;
    table.insert(make_pair(id,entry));
    return 1;
  }
  return 0;
}

int Scope::insertType(std::string id, TypeSpecifier *t){
  if(table.find(id)==table.end()){
    Entry *entry= new Entry();
    entry->type=new TypeSpecifier();
    entry->type->n=1;
    entry->type->child= new TypeSpecifier *[1];
    entry->type->child[0] = t;
    table.insert(make_pair(id,entry));
    return 1;
  }
  return 0;
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
    printf("%d - %s %d\n", ++i, it->first.c_str(), (int) (it->second->type));
  }
}

void Scope::deleteStuff(){
  TableIterator it;
  printf("Deleting contents of Symbol Table\n");
  int i=0;
  for(it=table.begin(); it!=table.end(); it++){
    delete it->second->type;
  }
}

#endif
