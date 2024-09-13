// HW.04_Ex10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функция, която приема символ и дали символа е главна буква.

//Вход: 'А', Изход : true

//Вход : '!', Изход : false //или грешка

bool isCapitalLetter(char symbol)
{
    return (symbol >= 'A' && symbol <= 'Z');
}

int main()
{
    char symbol;
    cout << "Input symbol: ";
    cin >> symbol;

    if (isCapitalLetter(symbol))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

