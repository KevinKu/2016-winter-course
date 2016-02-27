#ifndef _LIST_H_
#define _LIST_H_



typedef struct List_node{
int value;
struct List_node *next;
}List_node;


typedef struct List_node List;

List *swap(List *,List *,List *);


#endif
