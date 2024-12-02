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
    adrList sbntr;
    createList(coba);
    sbntr = createElm("Reja");
    insertFirst(coba, sbntr);
    sbntr = createElm("Yandik");
    insertFirst(coba, sbntr);
    sbntr = createElm("Jongle");
    insertFirst(coba, sbntr);

    printList(coba);
    cout << endl;

    sbntr = createElm("Yipi");
    insertFirst(coba, sbntr);
    sbntr = createElm("Yey");
    insertFirst(coba, sbntr);

    printList(coba);

    cout << endl << "Print huruf:" << endl;
    printHuruf(coba);
    cout << endl;

    cout << "Hello";
}