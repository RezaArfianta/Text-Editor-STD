#include <iostream>
#include "headerMenu.h"
using namespace std;

void menu()
{
    int pilihMenu;
    cout << "1. Tambah Kalimat" << endl;
    cout << "2. Lihat Daftar Kalimat" << endl;
    cout << "... Tutup Aplikasi" << endl;
    cout << "Pilih opsi: ";
    cin >> pilihMenu;
    if (pilihMenu == 1)
    {
        menuInsertKalimat();
    }
    else if (pilihMenu == 2)
    {
        // select and search
        menuLihatDaftarKalimat();
    }
    else if (pilihMenu == 3)
    {
    }
}

void menuInsertKalimat()
{
    int kembali;
    string testi;
    cout << "Ketikkan kalimat:" << endl;
    cin >> testi;
    // function

    cout << endl;
    cout << "Thanks for writing a sentence" << endl;
    cout << "Ketik 0 untuk kembali." << endl;
    cin >> kembali;
    if (kembali == 0)
    {
        menu();
    }
}

void menuLihatDaftarKalimat()
{
    int kembali;
    cout << "Isi daftar kalimat yang ada disini" << endl;
    cout << "Ingin pilih kalimat nomor berapa" << endl;
    cout << "Ketik 0 untuk kembali." << endl;
    cin >> kembali;
    if (kembali == 0)
    {
        menu();
    }
}