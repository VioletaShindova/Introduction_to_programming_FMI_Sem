// Counting_Specific_Symbol_InText.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool checkValues(char* strSymbol, const char* symbol)
{
    if (*strSymbol == *symbol)
    {
        return true;
    }
    else
    {
        return false;
    }
}

unsigned myStrlen(char* str)
{
    if (!str)
    {
        return 0;
    }

    unsigned length = 0;
    while (*str) //it is the same as (*str) != 0
    {
        length++;
        str++;
    }
    return length;
}

unsigned countingSymbolInText(char* str, const char* symbol)
{
    unsigned strLength = myStrlen(str);
    unsigned counter = 0;

    while (strLength)
    {
        if (checkValues(str, symbol))
        {
            counter++;
        }
        str++;
        strLength--;
    }
    return counter;
}

int main()
{
    char str[] = "I am the best of the best";
    char symbol = ' ';
    char* ptrSymbol = &symbol;

    unsigned count = countingSymbolInText(str, ptrSymbol);
    cout << count;
}
