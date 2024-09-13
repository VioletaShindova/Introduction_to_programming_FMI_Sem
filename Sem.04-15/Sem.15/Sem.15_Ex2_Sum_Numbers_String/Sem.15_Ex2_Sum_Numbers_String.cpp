// Sem.15_Ex2_Sum_Numbers_String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isDigit(const char symbol)
{
    return ((symbol >= '0') && (symbol <= '9'));
}

unsigned getSumOfNumbersInStrRec(const char* text, unsigned number = 0, unsigned sum = 0)
{
    if (!(*text))
    {
        return sum;
    }

    if (isDigit(*text))
    {
        (number *= 10) += ((*text) - '0');
        if(!isDigit(*(text + 1)))
        {
            sum += number;
            number = 0;
        }
    }

    return (getSumOfNumbersInStrRec(text + 1, number, sum));
}

unsigned getSumOfNumbersInStr(const char* text)
{
    if (!text)
    {
        return 0;
    }

    unsigned result = getSumOfNumbersInStrRec(text);
}

int main()
{
    cout << getSumOfNumbersInStr("asd123as33d");
}

