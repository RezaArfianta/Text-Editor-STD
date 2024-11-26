#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

struct Elm;
typedef Elm *address;

struct Elm
{
    int info;
    address next;
};

struct List
{
    address first;
};

void createList(List &L);
address createElm(int x);
void insertFirst(List &L, address P);
void printList(List L);

#endif