// Sem.07_1.2_FromBinaryToDecimalWithoutArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете програма, която конвертира число от десетична в двоична бройна система, като НЕ използвате масиви.

bool isPositive(const int number)
{
    return (number >= 0);
}

unsigned convertDecimalToBinary(int number)
{
    unsigned counter = 0;
    unsigned newNumber = 0;

    while (number != 0)
    {
        (newNumber *= 10) += (number % 2);
        counter++;
        number /= 2;
    }
    counter = 8 - counter;
    if (isPositive(number))
    {
        while (counter != 0)
        {
            cout << 0;
            counter--;
        }

    }
    else
    {   
        while (counter != 0)
        {
            cout << 1;
            counter--;
        }
    }
    return newNumber;
}

int main()
{
    int number;
    cout << "Input a number: ";
    cin >> number;

    cout << convertDecimalToBinary(number);
}

