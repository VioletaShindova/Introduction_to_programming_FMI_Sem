// Sem.08_Ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функция, която приема цяло число n и цяло число k и връща дали k в двоичен запис
//(разглеждайки го без водещите 0 - ли) е част от двоичния запис на n.

//Вход: 15 3, Изход : true

//Вход : 13 5 Изход : true

//Вход : 13 7, Изход : false

bool checkNumber(int firstNumber, int secondNumber)
{
    bool result = true;
    while (secondNumber != 0)
    {
        unsigned mask = 1;
        if ((firstNumber & mask) != (secondNumber & mask))
        {
            result = false;
            return result;
        }
        firstNumber >>= 1;
        secondNumber >>= 1;
    }
    return result;
}

int main()
{
    int firstNumber;
    cout << "Input a firstNumber: ";
    cin >> firstNumber;

    int secondNumber;
    cout << "Input a secondNumber: ";
    cin >> secondNumber;

    if (checkNumber(firstNumber, secondNumber))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

