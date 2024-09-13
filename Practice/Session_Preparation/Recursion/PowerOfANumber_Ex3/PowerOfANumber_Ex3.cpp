// PowerOfANumber_Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned powerOfANumber(unsigned number, unsigned power)
{
    if (power == 0)
    {
        return 1;
    }

    return (number * powerOfANumber(number, power - 1));
}

int main()
{
    cout << powerOfANumber(2,5);
}