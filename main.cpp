#include <iostream>
# include "header.h"
//
//using namespace std;
//
////void InitList(TextEditMLL& editor) {
////    editor.current = nullptr;
////}
//
//void createList(List &L)
//{
//    L.first = NULL;
//    L.last = nullptr;
//}
//
//adrList createElm(string x)
//{
//    adrList P;
//    P = new Elm;
//
//    P->info = x;
//    P->next = NULL;
//    P->prev = nullptr;
//    P->huruf = nullptr;
//
//    return P;
//}
////
//
//adrHuruf createHuruf(string info){
//    // Jadi ini create hurufnya sekalian assign P->info ke P->huruf
//    adrHuruf first = nullptr;
//    adrHuruf last = nullptr;
//
//    for (char huruf : info) {
//        adrHuruf newHuruf = new ElmHuruf;
//        newHuruf->huruf = huruf;
//        newHuruf->next = nullptr;
//
//        if (first == nullptr) {
//            first = newHuruf;
//            last = first;
//        } else {
//            last->next = newHuruf;
//            last = newHuruf;
//        }
//    }
//
//    return first;
//}
//
//void insertFirst(List &L, adrList P)
//{
//    P->huruf = createHuruf(P->info);
//
//    if (L.first == NULL) {
//        L.first = P;
//        L.last = P;
//    }
//    else {
//        P->next = L.first;
//        L.first->prev = P;
//        L.first = P;
//    }
//
//
//}
//
//void insertLast(List &L, adrList P){
//    P->huruf = createHuruf(P->info);
//
//    if (L.first != nullptr){
//        P->prev = L.last;
//        L.last->next = P;
//        L.last = P;
//    } else {
//        L.first = P;
//        L.last = P;
//    }
//}
//
//void insertAfter(List &L, adrList P, adrList pred){
//    if (L.first != nullptr){
//        P->next = pred->next;
//        P->prev = pred;
//        pred->next->prev = P;
//        pred->next = P;
//    } else {
//        L.first = P;
//        L.last = P;
//    }
//}
//
//void deleteFirst(List &L, adrList P){
//    if (L.first != nullptr){
//        P = L.first;
//        L.first = P->next;
//        P->next = nullptr;
//        L.first->prev = nullptr;
//    } else {
//        L.first = nullptr;
//        L.last = nullptr;
//    }
//}
//
//void deleteLast(List &L, adrList P){
//    if (L.first != nullptr){
//        P = L.last;
//        L.last = L.last->prev;
//        P->prev = nullptr;
//        L.last->next = nullptr;
//    } else {
//        L.first = nullptr;
//        L.last = nullptr;
//    }
//}
//
//void deleteAfter(List &L, adrList P, adrList pred){
//    if (L.first != nullptr){
//        P = pred->next;
//        pred->next= P->next;
//        P->next->prev = pred;
//        P->prev = nullptr;
//        P->next = nullptr;
//    } else {
//        L.first = nullptr;
//        L.last = nullptr;
//    }
//}
//
//void printList(List L)
//{
//    adrList P;
//    P = L.first;
//    if (L.first != NULL)
//    {
//        while (P != NULL)
//        {
//            cout << P->info << " ";
//            P = P->next;
//        }
//    }
//}
//
//void printHuruf(List L){
//    adrList P = L.first;
//
//    if (L.first != nullptr){
//        while (P != nullptr){
//            adrHuruf Q = P->huruf;
//            while (Q != nullptr){
//                cout << Q->huruf;
//                Q = Q->next;
//            }
//            P = P->next;
//        }
//    }
//}
//
//void createStack(Stack &S){
//    S.top = 0;
//};
//
//bool isEmptyS(Stack S){
//    return S.top == 0;
//}
//
//bool isFullS(Stack S){
//    return S.top == MAXSIZE;
//}
//
//void Push(StackMLL& S, const string& info) {
//    StackNode* newNode = new StackNode;
//    newNode->data = info;
//    newNode->next = S.top;
//    S.top = newNode;
//}
//
//string Pop(StackMLL& S) {
//    if (S.top == nullptr) {
//        return ""; // Jika stack kosong
//    }
//    string data = S.top->data;
//    StackNode* temp = S.top;
//    S.top = S.top->next;
//    delete temp;
//    return data;
//}
//
//
//infotypeS peek(Stack S){
//    if (!isEmptyS){
//        return S.info[S.top];
//    } else {
//        return nullptr;
//    }
//}
//
//int sizeS(Stack S){
//    return S.top;
//}
//
//void printStack(Stack S){
//    // Stack temp;
//    // infotypeS x;
//    // createStack(temp);
//    // while(!isEmptyS){
//    //     pop(S,x);
//    //     push(temp,x);
//    // }
//    // while(!isEmptyS){
//    //     pop(S,x);
//    //     cout << x;
//    //     push(S,x);
//    // }
//}
//
//Queue createQueue(Queue Q){
//    Q.head = Q.tail = nullptr;
//    return Q;
//}
//
//bool isEmptyQ(Queue Q){
//    return Q.head;
//}
//
//void enqueue(Queue &Q, address P){
//
//    if (isEmptyQ(Q)){
//        Q.head = Q.tail = P;
//    } else {
//        P->prev = Q.tail;
//        Q.tail->next = P;
//        Q.tail = P;
//    }
//}
//
//void dequeue(Queue &Q, address P){
//    P = Q.head;
//    if (!isEmptyQ){
//        if (Q.head != Q.tail){
//            Q.head = P->next;
//            P->next = nullptr;
//            Q.head->prev = nullptr;
//        } else {
//            Q.head = Q.tail = nullptr;
//        }
//    }
//}
//
//address front(Queue Q){
//    address P;
//
//    P = nullptr;
//    if (!isEmptyQ(Q)){
//        P = Q.head;
//    }
//    return P;
//}
//
//infotypeQ sizeQ(Queue Q){
//    infotypeQ result;
//    address P;
//
//    result = 0;
//    P = Q.head;
//    while (P!=nullptr){
//        result++;
//        P=P->next;
//    }
//    return result;
//}
//
//void createMLL(List kalimat, const string& newContent){
//    adrList newNode;
//    newNode = new Elm;
//    newNode->info = newContent;
//    newNode->prev = kalimat.current;
//    newNode->next = nullptr;
//
//    if (kalimat.current != nullptr) {
//        kalimat.current->next = newNode;
//    }
//
//    kalimat.current = newNode; // Update state aktif
//}
//
//void undoHuruf(List& kalimat, Stack& stackUndo, Stack& stackRedo) {
//    if (kalimat.current == nullptr) {
//        cout << "Tidak ada state untuk di-undo." << endl;
//        return;
//    }
//
//    Push(stackRedo, kalimat.current->info);
//
//    if (kalimat.current->prev != nullptr) {
//        kalimat.current = kalimat.current->prev;
//    }
//}
//
//void ShowAllStates(const TextEditMLL& editor) {
//    if (editor.current == nullptr) {
//        cout << "Tidak ada state dalam editor." << endl;
//        return;
//    }
//
//    // Cari elemen awal
//    TextEditNode* temp = editor.current;
//    while (temp->prev != nullptr) {
//        temp = temp->prev;
//    }
//
//    // Cetak dari elemen awal ke akhir
//    int index = 1;
//    while (temp != nullptr) {
//        cout << "State " << index << ": " << temp->content << endl;
//        temp = temp->next;
//        index++;
//    }
//}
//
//#include <iostream>
//#include "string"


#include <iostream>
#include "header.h"
#include "function.cpp"
#include "MENU\headerMenu.h"
#include "MENU\functionMenu.cpp"

using namespace std;

int pilihMenu;

int main()
{
    cout << "Welcome to UnyilKucrit Text Editor" << endl;
    menu();
    cout << "Terima kasih telah memakai UnyilKucrit Text Editor" << endl;
}
