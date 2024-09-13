// Sem.08_Ex2_Power.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Get the value of 2^power

unsigned powerOfTwo(unsigned power)
{
    if (power == 0)
    {
        return 1;
    }
    else if (power > 31)
    {
        return 0;
    }

    unsigned mask = 1;

    return mask << power;
}

int main()
{
    unsigned power;
    cout << "Input a power: ";
    cin >> power;

    cout << powerOfTwo(power);
}
