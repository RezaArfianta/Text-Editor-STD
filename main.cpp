#include <iostream>
#include "header.h"
#include "function.cpp"

using namespace std;

int main()
{
    cout << "Hello bro" << endl;
    int a, b;
    a = 10;
    b = 16;
    cout << a * b << endl;

    List coba;
    address sbntr;
    createList(coba);
    sbntr = createElm(10);
    insertFirst(coba, sbntr);
    sbntr = createElm(20);
    insertFirst(coba, sbntr);
    sbntr = createElm(30);
    insertFirst(coba, sbntr);

    printList(coba);
}