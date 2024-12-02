#include "header.h"
#include <iostream>

using namespace std;

void redoHuruf(List &kalimat, Stack &undoStack, Stack &redoStack) {
    List simpan;
    
    if (!isEmptyS(redoStack)){
        pop(redoStack, simpan);
        push(undoStack, kalimat);
        kalimat = simpan;
    }
    //setelah redo bisa coba di cek pake printlist nya lagi
}

// MAIN:
    // List coba;
    // adrList sbntr;
    // createList(coba);
    // string input;

    // cout << "Koniciwaa Ni-san" << endl << endl << endl;

    // INPUT MENGGUNAKAN SPASI
    // getline(cin, input);

    // MEMISAHKAN KATA DAN ASSIGN MASING-MASING KATA KE LIST
    // istringstream pecah(input);

    // string kata;
    // while (pecah >> kata){
    //     sbntr = createElm(kata);
    //     insertLast(coba, sbntr);
    // }

    // cout << "Isi teks editor:" << endl;

    // printList(coba);
    // cout << endl << endl;

    // cout << endl << "\033[33m" <<"Print huruf:" << "\033[0m" << endl;
    // printHuruf(coba);