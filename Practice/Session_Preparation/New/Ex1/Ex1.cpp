// Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned findingDigits(unsigned number, unsigned counter)
{
    unsigned newNumber = 0;

    while (number != 0)
    {
        if (((number % 10) % counter) == 0)
        {
            ((newNumber *= 10) += counter);
        }

        number /= 10;
    }
    return newNumber;
}

unsigned findDigitsCounter(unsigned number)
{
    unsigned digitCounter = 0;
    while (number != 0)
    {
        digitCounter++;
        number /= 10;
    }
    return digitCounter;
}

unsigned convertNewNumber(unsigned number)
{ //432551 = 
    unsigned counter = 5;
    unsigned newNumber = 0;
    unsigned newNumberDigitCounter = 0;
    unsigned digits = 0;

    unsigned digitCounter = findDigitsCounter(number);

    while(newNumberDigitCounter != digitCounter)
    {
        digits = findingDigits(number, counter);
        if (findingDigits(number, counter) != 0)
        {
            ((newNumber *= 10) += digits);
            newNumberDigitCounter = findDigitsCounter(newNumber);
        }

        counter--;
    }
    return newNumber;
}

int main()
{
    unsigned number;
    cout << "Input number: ";
    cin >> number;

    cout << convertNewNumber(number);
}
