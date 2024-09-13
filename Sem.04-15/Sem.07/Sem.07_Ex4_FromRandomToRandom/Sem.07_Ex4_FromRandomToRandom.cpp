// Sem.07_Ex4_FromRandomToRandom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void print(char toRandom[], size_t SIZE)
{
    for (int i = SIZE - 1; i >= 0; i--)
    {
        cout << toRandom[i];
    }
}

int getIndexOfSymbol(char symbol)
{
    if (symbol >= '0' && symbol <= '9')
    {
        return symbol - '0';
    }
    else if (symbol >= 'A' && symbol <= 'Z')
    {
        return 10 + (symbol - 'A');
    }
    else
    {
        return -1;
    }
}

unsigned fromRandomToDecimal(char from[], size_t size_From, unsigned countSystemFrom)
{
    unsigned newNumber = 0;
    for (int i = size_From - 1, mult = 1; i >= 0; i--, mult *= countSystemFrom)
    {
        newNumber += getIndexOfSymbol(from[i]) * mult;
    }
    return newNumber;
}

void fromRandomToRandom(char from[], size_t size_From, unsigned countSystemFrom, char to[], size_t size_To, unsigned countSystemTo)
{
    unsigned int decimal = fromRandomToDecimal(from, size_From, countSystemFrom);
    fromDecimalToRandom(decimal, to, size_To, countSystemTo);
}

int main()
{
    constexpr size_t SIZE = 5;
    char from[SIZE] = { '0', '0', 'A','B', '3' };
    char to[SIZE];

    fromRandomToRandom(from, SIZE, 16, to, SIZE, 10);
    print(to, SIZE);
}
   
