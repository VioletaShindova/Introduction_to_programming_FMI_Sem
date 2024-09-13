// HW.04_Ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//?? ?? ?????? ???????, ????? ?????? ??? ?????????? ????? ? ????? ???? ?????, ????? ? ??????? ????????????.

//????: 19 32, ????? : 1932

void reverse(unsigned& secondNumber)
{
    unsigned newNumber = 0;
    while (secondNumber != 0)
    {
        ((newNumber *= 10) += (secondNumber % 10));
        secondNumber /= 10;
    }
    secondNumber = newNumber;
}

unsigned concatNumbers(unsigned firstNumber, unsigned secondNumber)
{
    unsigned newNumber = firstNumber;

    reverse(secondNumber);
    while (secondNumber != 0)
    {
        (newNumber *= 10) += (secondNumber % 10);
        secondNumber /= 10;
    }
    return newNumber;
}

int main()
{
    unsigned firstNumber;
    cout << "Input a first natural number: ";
    cin >> firstNumber;

    unsigned secondNumber;
    cout << "Input a second natural number: ";
    cin >> secondNumber;

    cout << concatNumbers(firstNumber, secondNumber);
}

