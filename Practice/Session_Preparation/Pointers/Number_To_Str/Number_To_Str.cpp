// Number_To_Str.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

char converToChar(int number)
{
    if (number >= 0 && number <= 9)
    {
        return (number + '0');
    }
    else
    {

    }
    {
        return '\0';
    }
}

unsigned getNumberLength(int number)
{
    unsigned result = 0;
    while (number != 0)
    {
        result++;
        number /= 10;
    }
    return result;
}

void convertNumberToChar(int number, char* str)
{
    unsigned numberLength = getNumberLength(number);

    for (int i = numberLength -1; i >= 0; i--)
    {
        str[i] = converToChar(number % 10);
        number /= 10;
    }

    str[numberLength] = '\0';
}

int main()
{
    char str[60];
    int number = 1234;
    convertNumberToChar(number, str);
    cout << str;
}
