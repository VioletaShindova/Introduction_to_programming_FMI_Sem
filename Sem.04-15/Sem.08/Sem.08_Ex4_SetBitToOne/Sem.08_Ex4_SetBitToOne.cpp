// Sem.08_Ex4_SetBitToOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Set a certain bit to one

int setBitToOne(int number, unsigned position)
{
    int mask = 1;
    mask <<= position;
    return (mask | number);
}

int main()
{
    int number;
    cout << "Input number: ";
    cin >> number;

    unsigned position;
    cout << "Input position: ";
    cin >> position;

    cout << setBitToOne(number, position);
}
