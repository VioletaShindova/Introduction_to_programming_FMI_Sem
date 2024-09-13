// PowOfANumberRef_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void powerNumber(int& number, unsigned int power)
{
    cout << pow(number, power);
}

int main()
{
    int number;
    cout << "Input number: ";
    cin >> number;

    unsigned int power;
    cout << "Input power: ";
    cin >> power;

    powerNumber(number, power);
}
