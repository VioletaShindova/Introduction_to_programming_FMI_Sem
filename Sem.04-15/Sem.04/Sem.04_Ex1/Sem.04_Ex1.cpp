// Sem.04_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Въвежда се неотрицателно число n.Да се отпечатат всички двойки прости числа, които са във вида 6k - 1 и 6k + 1.

void myPrintPrimeNumber(const unsigned& number)
{
    cout << number << " ";
}

bool checkIfPrime(const unsigned& number)
{
    unsigned temp = sqrt(number);
    for (size_t i = 2; i < temp; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    //with functions
    int number = 0;
    do
    {
        cout << "Input a positive number: ";
        cin >> number;
    } while (number <= 0);

    for (size_t i = 6; i < number; i += 6)
    {
        unsigned leftNumber = i - 1;
        unsigned rightNumber = i + 1;

        if (checkIfPrime(leftNumber) && checkIfPrime(rightNumber))
        {
            myPrintPrimeNumber(leftNumber);
            myPrintPrimeNumber(rightNumber);
        }
    }


    //-------------------------------------------------------------------
    //without functions
    /*int number = 0;
    do
    {
        cout << "Input a positive number: ";
        cin >> number;
    } while (number <= 0);
   
    for (size_t i = 6; i < number; i += 6)
    {
        unsigned leftNumber = i - 1;
        unsigned rightNumber = i + 1;

        //prime check
        bool isFirstPrime = true;
        unsigned temp = sqrt(leftNumber);
        for (size_t j = 2; j < temp; j++)
        {
            if (leftNumber % j == 0)
            {
                isFirstPrime = false;
                break;
            }
        }

        if (isFirstPrime)
        {
            cout << leftNumber << " ";
        }

        bool isSecondPrime = true;
        temp = sqrt(rightNumber);
        for (size_t j = 2; j < temp; j++)
        {
            if (rightNumber % j == 0)
            {
                isSecondPrime = false;
                break;
            }
        }

        if (isSecondPrime)
        {
            cout << rightNumber << " ";
        }
    }
    */
}

