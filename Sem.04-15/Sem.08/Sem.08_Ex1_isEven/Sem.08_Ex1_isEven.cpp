// Sem.08_Ex1_isEven.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Chech whether the number is even or odd

bool isEven(int number)
{
    unsigned mask = 1;
    return !(mask & number);
}

int main()
{
    int number;
    cout << "Input a number: ";
    cin >> number;

    if (isEven(number))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

