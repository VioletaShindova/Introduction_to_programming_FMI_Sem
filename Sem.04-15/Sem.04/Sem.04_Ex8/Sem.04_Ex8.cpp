// Sem.04_Ex8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете функция, която приема неотрицателно числа n и k връща log_k(n) (закръглено надолу)
//Вход: 90 3 Изход : 4
//a,b,c са положителни реални числа b > 0, a > 0 и a ≠ 1

unsigned log(unsigned& firstNumber, unsigned& secondNumber)
{
    if (secondNumber == 1)
    {
        return 0;
    }
    unsigned baseNumber = secondNumber;
    unsigned powerCounter = 1;
    while (secondNumber <= firstNumber)
    {
        secondNumber *= baseNumber;
        if (secondNumber > firstNumber)
        {
            break;
        }
        powerCounter++;
    }

    return powerCounter;
}

int main()
{
    //log_secondNumber(firstNumber)
    unsigned firstNumber = 0;
    do
    {
        cout << "Input a positive number: ";
        cin >> firstNumber;
    } while (firstNumber == 0);

    unsigned secondNumber = 0;
    do
    {
        cout << "Input a positive number: ";
        cin >> secondNumber;
    } while (secondNumber == 0);

    cout << log(firstNumber, secondNumber);
}

