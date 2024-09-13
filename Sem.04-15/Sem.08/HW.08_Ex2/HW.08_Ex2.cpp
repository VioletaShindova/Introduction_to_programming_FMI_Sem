// HW.08_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функция, която приема цяло число и връща броя на 1 - ците в двоичния му запис.

//Вход: 189, Изход : 6

unsigned countPositiveBitsInNumber(unsigned number)
{
    unsigned mask = 1;
    unsigned counter = 0;
    while (number != 0)
    {
        if ((mask & number) == 1)
        {
            counter++;
        }
        number >>= 1;
    }
    return counter;
}

int main()
{
    unsigned number;
    cout << "Input a number: ";
    cin >> number;

    cout << countPositiveBitsInNumber(number);
}

