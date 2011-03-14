#include "scope.h"
#include "type.h"
#include<cstdio>
using namespace std;

void Scope::declare(string id, TypeSpecifier *t){
  if(table.find(id)==table.end()){
    //Raise exception
    ;
  }
  Entry *entry= new Entry();
  entry->type=t;
  table.insert(make_pair(id,entry));
}


Entry * Scope::lookup(string id){ 
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

