// Sem.08_Ex3_SetBitTo0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Set a certain but to zero

unsigned makeBitZero(int number, int position)
{
    int mask = 1;
    mask <<= position;
    mask = ~mask;
    return number & mask;
}

int main()
{
    int number;
    cout << "Input number: ";
    cin >> number;

    int position;
    cout << "Input position: ";
    cin >> position;

    cout << makeBitZero(number, position);
}
