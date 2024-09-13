// HW.08_Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функция, която приема цяло число и обръща най - десния бит в него, който е единица.

//Вход: 12, Изход : 8

//Вход : 15, Изход : 14

unsigned changeFirstPositiveBitToZero(int number)
{
    unsigned counterPositions = 0;
    while (number != 0)
    {
        unsigned mask = 1;

        if ((mask & number) == 1)
        {
            number ^= mask;
            break;
        }
        counterPositions++;
        number >>= 1;
    }

    while (counterPositions != 0)
    {
        number <<= 1;
        counterPositions--;
    }
    return number;
}

int main()
{
    int number;
    cout << "Input number: ";
    cin >> number;

    cout << changeFirstPositiveBitToZero(number);
}