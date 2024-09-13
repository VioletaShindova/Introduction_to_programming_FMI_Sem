// HW.04_Ex12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функция, която приема символ и ако символът е цифра, да върне съответната цифра.
//Ако символът не е цифра, то да върне - 1

//Вход: '7', Изход : 7

//Вход : '!', Изход : -1 //или грешка

bool isDigit(char symbol)
{
    return (symbol >= '0' && symbol <= '9');
}

int main()
{
    char symbol;
    cout << "Input symbol: ";
    cin >> symbol;

    if (isDigit(symbol))
    {
        cout << symbol;
    }
    else
    {
        cout << -1;
    }
}