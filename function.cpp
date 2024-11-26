#include "header.h"
#include <iostream>

using namespace std;

void createList(List &L)
{
    L.first = NULL;
}

address createElm(int x)
{
    address P;
    P = new Elm;

    P->info = x;
    P->next = NULL;

    return P;
}

void insertFirst(List &L, address P)
{
    if (L.first == NULL)
    {
        L.first = P;
    }
    else
    {
        address Q;
        Q = L.first;
        P->next = Q;
        L.first = P;
    }
}

void printList(List L)
{
    address P;
    P = L.first;
    if (L.first != NULL)
    {
        while (P != NULL)
        {
            cout << P->info << " ";
            P = P->next;
        }
    }
}