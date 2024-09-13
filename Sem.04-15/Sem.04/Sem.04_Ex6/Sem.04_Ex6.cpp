// Sem.04_Ex6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете функция, която приема неотрицателни числа n и k и връща дали k е инфикс в n.
//Вход: 2831, 83, Изход : true

bool isInfix(unsigned firstNumber, unsigned secondNumber)
{
    bool result = false;
    while (firstNumber >= secondNumber)
    {
        unsigned lastDigit_firstNumber = firstNumber % 10;
        unsigned lastDigit_secondNumber = secondNumber % 10;
        if (lastDigit_firstNumber == lastDigit_secondNumber)
        {
            result = true;
            secondNumber /= 10;
        }

        firstNumber /= 10;
       
    }
    return result;
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

    if (isInfix(firstNumber, secondNumber))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

