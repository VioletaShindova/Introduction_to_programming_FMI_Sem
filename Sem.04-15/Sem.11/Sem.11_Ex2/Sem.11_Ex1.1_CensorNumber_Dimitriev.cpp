// Sem.11_Ex1.1_CensorNumber_Dimitriev.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Да се напише функция, която приема стринг и връща нов стринг с ТОЧНА ГОЛЕМИНА,
//в който всички числа са цензурирани. (Всяко число е заменено с '*')

bool isDigit(const char symbol)
{
    return (symbol >= '0' && symbol <= '9');
}

unsigned getNumbersCount(const char* text)
{
    if (!text)
    {
        return 0;
    }

    unsigned numbersCounter = 0;

    while (*text)
    {
        //we count the end of the numbers. Str + 1 is allowed, 
        //because we have a terminating zero (which is not a digit) 
        //at the end (we won't go out of bounds)
        if (isDigit(*text) && !isDigit(*(text + 1)))
        {
            numbersCounter++;
        }

        text++;
    }

    return numbersCounter;
}

unsigned getDigitsCount(const char* text)
{
    if (!text)
    {
        return 0;
    }

    unsigned digitsCounter = 0;
    while (*text)
    {
        if (isDigit(*text))
        {
            digitsCounter++;
        }
        text++;
    }

    return digitsCounter;
}

unsigned myStrlen(const char* text)
{
    if (!text)
    {
        return 0;
    }

    unsigned counter = 0;
    while (*text)
    {
        counter++;
        text++;
    }
    return counter;
}

char* censoreNumbers(const char* text)
{
    if (!text)
    {
        return nullptr;
    }

    size_t resultSize = myStrlen(text) - getDigitsCount(text) + getNumbersCount(text);
    char* result = new char[resultSize + 1]; // because of '\0'
    unsigned resultIndex = 0;

    while (*text)
    {
        if (!isDigit(*text))
        {
            result[resultIndex++] = *text;
        }
        else if (!isDigit(*(text + 1)))
        {
            result[resultIndex++] = '*';
        }

        text++;
    }
    result[resultIndex] = '\0';
    return result;
}

int main()
{
    char* text = censoreNumbers("abc1234dgg4fsdg5");

    cout << text;
    delete[] text;
}
