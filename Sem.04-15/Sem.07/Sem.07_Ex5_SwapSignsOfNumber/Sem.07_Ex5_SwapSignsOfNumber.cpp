// Sem.07_Ex5_SwapSignsOfNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int swapSignsOfNumber(int number)
{
    number = ~number;
    if (number >= 0)
    {
        number += 1;
    }
    else
    {
        unsigned mask = 1;
        number += mask;
    }
    
    return number;
}

int main()
{
    int number;
    cout << "Input a number: ";
    cin >> number;

    cout << swapSignsOfNumber(number);
}
