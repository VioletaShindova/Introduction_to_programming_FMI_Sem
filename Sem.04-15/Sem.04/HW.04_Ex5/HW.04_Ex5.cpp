// HW.04_Ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете функция, която по подадено естествено число N, връща число, 
//което е резултат от конкатенацията на обърнатото число на N с подаденото N.

//Вход: 1234 Изход : 43211234

void reverse(unsigned& firstNumber)
{
    unsigned newNumber = 0;
    while (firstNumber != 0)
    {
        (newNumber *= 10) += (firstNumber % 10);
        firstNumber /= 10;
    }
    firstNumber = newNumber;
}

unsigned concat(unsigned firstNumber, unsigned secondNumber)
{
    reverse(firstNumber);
    reverse(secondNumber);
    unsigned newNumber = firstNumber;

    while (secondNumber != 0)
    {
        (newNumber *= 10) += (secondNumber % 10);
        secondNumber /= 10;
    }
    return newNumber;
}

int main()
{
    unsigned number;
    cout << "Input number: ";
    cin >> number;

    cout << concat(number, number);
}
