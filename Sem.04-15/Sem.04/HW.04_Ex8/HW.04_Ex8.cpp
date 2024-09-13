// HW.04_Ex8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете функция, която приема естествено число и връща дали цифрите му са еднакви.

//Вход: 111111, Изход : true

bool checkIfIdenticalDigits(unsigned& number)
{
    unsigned temp = number % 10;
    bool result = true;
    number /= 10;
    while (number != 0)
    {
        if (number % 10 != temp)
        {
            result = false;
            break;
        }
        number /= 10;
        temp = number % 10;
    }
    return result;
}

int main()
{
    unsigned number;
    cout << "Input a natural number: ";
    cin >> number;

    if (checkIfIdenticalDigits(number))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

