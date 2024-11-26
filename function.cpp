#include "header.h"
#include <iostream>

using namespace std;

void createList(List &L)
{
    L.first = NULL;
    L.last = nullptr;
}

adrList createElm(int x)
{
    adrList P;
    P = new Elm;

    P->info = x;
    P->next = NULL;
    P->prev = nullptr;

    return P;
}

void insertFirst(List &L, adrList P)
{
    if (L.first == NULL) {
        L.first = P;
        L.last = P;
    }
    else {
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
}

void insertLast(List &L, adrList P){
    if (L.first != nullptr){
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    } else {
        L.first = P;
        L.last = P;
    }
}

void insertAfter(List &L, adrList P, adrList pred){
    if (L.first != nullptr){
        P->next = pred->next;
        P->prev = pred;
        pred->next->prev = P;
        pred->next = P;
    } else {
        L.first = P;
        L.last = P;
    }
}

void deleteFirst(List &L, adrList P){
    if (L.first != nullptr){
        P = L.first;
        L.first = P->next;
        P->next = nullptr;
        L.first->prev = nullptr;
    } else {
        L.first = nullptr;
        L.last = nullptr;
    }
}

void deleteLast(List &L, adrList P){
    if (L.first != nullptr){
        P = L.last;
        L.last = L.last->prev;
        P->prev = nullptr;
        L.last->next = nullptr;
    } else {
        L.first = nullptr;
        L.last = nullptr;
    }
}

void deleteAfter(List &L, adrList P, adrList pred){
    if (L.first != nullptr){
        P = pred->next;
        pred->next= P->next;
        P->next->prev = pred;
        P->prev = nullptr;
        P->next = nullptr;
    } else {
        L.first = nullptr;
        L.last = nullptr;
    }
}

void printList(List L)
{
    adrList P;
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

void createStack(Stack &S){
    S.top = 0;
};

infotypeS isEmptyS(Stack S){
    return S.top == 0;
}

infotypeS isFullS(Stack S){
    return S.top == MAXSIZE;
}

void push(Stack &S, infotypeS P){
    if (!isEmptyS){
        S.top++;
        S.info[S.top] = P;
    }
}

void pop(Stack &S, infotypeS P){
    if (!isFullS){
        P = S.info[S.top--];
    }
}

infotypeS peek(Stack S){
    if (!isEmptyS){
        return S.top;
    } else {
        return -1;
    }
}

infotypeS sizeS(Stack S){
    return S.top;
}

void printStack(Stack S){
    Stack temp;
    infotypeS x;
    createStack(temp);
    while(!isEmptyS){
        pop(S,x);
        push(temp,x);
    }
    while(!isEmptyS){
        pop(S,x);
        cout << x;
        push(S,x);
    }
}

Queue createQueue(Queue Q){
    Q.head = Q.tail = nullptr;
    return Q;
}

bool isEmptyQ(Queue Q){
    return Q.head;
}

void enqueue(Queue &Q, address P){

    if (isEmptyQ(Q)){
        Q.head = Q.tail = P;
    } else {
        P->prev = Q.tail;
        Q.tail->next = P;
        Q.tail = P;
    }
}

void dequeue(Queue &Q, address P){
    P = Q.head;
    if (!isEmptyQ){
        if (Q.head != Q.tail){
            Q.head = P->next;
            P->next = nullptr;
            Q.head->prev = nullptr;
        } else {
            Q.head = Q.tail = nullptr;
        }
    }
}

address front(Queue Q){
    address P;

    P = nullptr;
    if (!isEmptyQ(Q)){
        P = Q.head;
    }
    return P;
}

infotypeQ sizeQ(Queue Q){
    infotypeQ result;
    address P;
    
    result = 0;
    P = Q.head;
    while (P!=nullptr){
        result++;
        P=P->next;
    }
    return result;
}