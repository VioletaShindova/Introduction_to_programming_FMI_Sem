// DigitScratching_Ex1_a.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned int getNumber()
{
    unsigned int number = 0;
   
    do
    {
        cout << "Input number bigger than 0: ";
        cin >> number;
    } while (number <= 0);

    return number;
}

void checkNumbers(unsigned int firstNumber, unsigned int secondNumber) 
{
    unsigned int newNumber = 0;
    unsigned int counter = 1;
    unsigned int counterIteration = 1;
    unsigned int digitPlaceHolder = 10;
    int result = 0;

    while (newNumber != secondNumber)
    {
        unsigned int lastDigit = firstNumber / counter % 10;

        if (((firstNumber / digitPlaceHolder) == 0) && ((secondNumber / digitPlaceHolder) == 0))
        {
            cout << "The numbers must have different count of digits!" << endl;
            break;
        }

        if (counterIteration == 1)
        {
            newNumber = (firstNumber / digitPlaceHolder);
        }
        else if (counterIteration == 2)
        {
            newNumber = (firstNumber / digitPlaceHolder) * counter + lastDigit;
        }
        else
        {
            newNumber = (firstNumber / digitPlaceHolder) * counter + (firstNumber % counter);
            
        }

        if (newNumber == secondNumber)
        {
            result = 1;
            break;
        }

        counterIteration++;
        counter *= 10;
        digitPlaceHolder *= 10;
    }

    if (result == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}

int main()
{
    unsigned int firstNumber = getNumber();
    unsigned int secondNumber = getNumber();

    if (firstNumber > secondNumber)
    {
        checkNumbers(firstNumber, secondNumber);
    }
    else if(secondNumber > firstNumber)
    {
        checkNumbers(secondNumber, firstNumber);
    }
    else
    {
        cout << "One of the numbers must have one more digit than the other one!";
    }
}
