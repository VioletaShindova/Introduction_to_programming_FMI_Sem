// Factorial_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned factorial(unsigned number)
{
    if (number == 0)
    {
        return 1;
    }

    return (number * factorial(number - 1));
}

int main()
{
    unsigned number;
    cout << "Input number: ";
    cin >> number;

    cout << factorial(number);
}

