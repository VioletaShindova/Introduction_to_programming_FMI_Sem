// HW.4_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете функция, която приема цяло число и връща модула му.

//Вход: 4, Изход : 4

//Вход : -4, Изход : 4

unsigned myModule(int number)
{
    if (number < 0)
    {
        return (number * (-1));
    }

    return number;
}

int main()
{
    int number;
    cout << "Input number: ";
    cin >> number;

    cout << myModule(number);
}
