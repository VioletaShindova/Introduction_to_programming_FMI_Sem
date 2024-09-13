// HW.04_Ex7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете функция, която приема естествено число и връща дали цифрите му са сортирани(във възходящ или в низходящ ред).

//Вход: 122239, Изход : true

bool checkIfSorted(unsigned number)
{
    bool result = true;
    unsigned maxDigit = number % 10;
    while (number != 0)
    {
        number /= 10;
        if (maxDigit >= number % 10)
        {
            maxDigit = number % 10;
        }
        else
        {
            result = false;
            return result;
        }
    }

    return result;
}

int main()
{
    unsigned number;
    cout << "Input number: ";
    cin >> number;

    if (checkIfSorted(number))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}
