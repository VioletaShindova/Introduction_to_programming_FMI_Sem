// Sem.07_Ex2_FromDecimalToRandomCountSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете програма, която да генерира число от десетична в произволна бройна система.

void print(char toRandom[], size_t SIZE)
{
    for (int i = SIZE - 1; i >= 0; i--)
    {
        cout << toRandom[i];
    }
}

char getSymbolFromIndex(unsigned index)
{
    char symbol = ' ';
    if (index >= 0 && index <= 9)
    {
        symbol = '0' + index;
    }
    if (index >= 10)
    {
        symbol = 'A' + (index - 10);
    }
    return symbol;
}

void fromDecimalToRandom(unsigned decimalNumber, char toRandom[], size_t SIZE, unsigned countSystem)
{
    for (int i = SIZE - 1; i >= 0 ; i--)
    {
        unsigned index = decimalNumber & countSystem;
        char current = getSymbolFromIndex(index);
        toRandom[i] = current;
        decimalNumber /= countSystem;
    }
}

int main()
{
    constexpr size_t SIZE = 5;

    char toRandom[SIZE] = {};
    fromDecimalToRandom(1234, toRandom, SIZE, 2);
    print(toRandom, SIZE);
}

