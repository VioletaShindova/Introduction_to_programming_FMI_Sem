// Sem.14_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Да се реализира рекурсивна функция, която пресмята n!

unsigned factorialRec(unsigned number)
{
    if (number == 1)
    {
        return 1;
    }

    return number * factorialRec(number - 1);
}

int main()
{
    unsigned number;
    cout << "Input number: ";
    cin >> number;

    cout << factorialRec(number);
}

