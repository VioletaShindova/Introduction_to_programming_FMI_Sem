// Sem.14_Ex7_FastPower.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//

unsigned fastPowerRec(unsigned number, unsigned power)
{
    if (power == 0)
    {
        return 1;
    }

    unsigned mask = 1;
    if ((power & mask) == 0)
    {
        return fastPowerRec(number * number, power / 2);
    }
    else
    {
        return number * fastPowerRec(number, power - 1);
    }
}

int main()
{
    unsigned number = 5;
    unsigned power;
    cout << "Input power: ";
    cin >> power;
    cout << fastPowerRec(number, power);
}
