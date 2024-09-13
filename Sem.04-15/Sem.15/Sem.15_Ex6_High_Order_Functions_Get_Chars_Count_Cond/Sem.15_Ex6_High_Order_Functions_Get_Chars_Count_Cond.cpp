// Sem.15_Ex6_High_Order_Functions_Get_Chars_Count_Cond.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isDigit(const char& symbol)
{
    return ((symbol >= '0') && (symbol <= '9'));
}

unsigned getCharsCountCond(const char* text, bool(*func)(const char&))
{
    if (!text)
    {
        return 0;
    }
    unsigned result = 0;
    while (*text)
    {
        if (func(*text))
        {
            result++;
        }
        text++;
    }
    return result;
}

int main()
{
    //cout << getCharsCountCond("abc341XY", isDigit) << endl;
    cout << "All chars: " << getCharsCountCond("abc341XY", [](const char& ch) {return true;});
}


