// Basic_Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int incresingValue(unsigned number, const unsigned position)
{
    int mask = 1;
    mask <<= position;

    //0100
    //1100 -> 1000
    number = mask | number;
    /*int result = 0;
    while (mask ^ number)
    {

    }*/

    return number;
}

int increasingBit(unsigned number, unsigned position)
{
    int mask = 1;

    //0001 -> 0100
    //0101 -> 0101
    return ((mask << position) | number);
}

int cleaningBit(unsigned number, unsigned position)
{
    int mask = 1;
    //0001
    //0101 -> 0001
    return ((mask << position) ^ number);
}

int powerOfTwo(unsigned power)
{
    if (power > 31)
    {
        return 0; //error
    }

    return 1 << power;
}

bool isfEven(unsigned& number)
{
    int mask = 1;

    return !(number & mask);
}

int main()
{
    unsigned number = 6;
    //cout << "Input number: ";
    //cin >> number;

    //cout << isfEven(number);
    //cout << cleaningBit(number, 2);
    //cout << increasingBit(number, 0);
    cout << incresingValue(5, 1);
}
