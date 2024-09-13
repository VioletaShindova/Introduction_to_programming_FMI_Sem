// Sem.04_Ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете функция, която приема неотрицателни числа n и k и връща дали k е префикс на n.
//Вход: 288, 28, Изход : true

bool checkValues(unsigned firstNumber, unsigned secondNumber)
{
    while (secondNumber != 0)
    {
        unsigned lastDigit_firstNumber = firstNumber % 10;
        unsigned lastDigit_secondNumber = secondNumber % 10;

        if (lastDigit_firstNumber != lastDigit_secondNumber)
        {
            return false;
        }

        firstNumber /= 10;
        secondNumber /= 10;
    }
    return true;
}

void reverse(unsigned& number)
{
    unsigned newNumber = 0;
    while (number != 0)
    {
        ((newNumber *= 10) += (number % 10));
        number /= 10;
    }
    number = newNumber;
    return;
}

bool isPrefix(unsigned firstNumber, unsigned secondNumber)
{
    reverse(firstNumber);
    reverse(secondNumber);

    return checkValues(firstNumber, secondNumber);
}

int main()
{
    int firstNumber = 0;
    do
    {
        cout << "Input a positive number: ";
        cin >> firstNumber;
    } while (firstNumber <= 0);

    int secondNumber = 0;
    do
    {
        cout << "Input a positive number: ";
        cin >> secondNumber;
    } while (secondNumber <= 0);

    if (isPrefix(firstNumber, secondNumber))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

