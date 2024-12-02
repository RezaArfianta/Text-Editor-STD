#include <iostream>
#include "header.h"
#include "function.cpp"
#include "MENU\headerMenu.h"
#include "MENU\functionMenu.cpp"

using namespace std;

int pilihMenu;

int main()
{
    cout << "Welcome to YaReJol Text Editor" << endl;
    menu();
    cin >> pilihMenu;
    if (pilihMenu == 1)
    {
        // insert something
    }
    else if (pilihMenu == 2)
    {
    }
}
