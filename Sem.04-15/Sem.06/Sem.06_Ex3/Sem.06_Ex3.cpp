// Sem.06_Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Да се напише функция, която приема масив и връща най - големият общ делител на числата в масива.

//Вход: [9 18 6 12] , Изход : 3

void checkValues(unsigned& firstNumber, unsigned& secondNumber)
{
    if (firstNumber > secondNumber)
    {
        unsigned temp = firstNumber;
        firstNumber = secondNumber;
        secondNumber = temp;
    }
    return;
}

unsigned greaterCommonDivisor(unsigned firstNumber, unsigned secondNumber)
{
    checkValues(firstNumber, secondNumber);

    for (size_t i = firstNumber; i >= 2; i--)
    {
        if (firstNumber % i == 0 && secondNumber % i == 0)
        {
            return i;
        }
    }
    return 1;
}

unsigned greatesCommonDivisor(int array[], const size_t length)
{
    unsigned gcd = array[0];
    for (size_t i = 0; i < length; i++)
    {
        unsigned greaterDivisor = greaterCommonDivisor(gcd, array[i]);
        if (gcd > greaterDivisor)
        {
            gcd = greaterDivisor;
        }
    }
    return gcd;
}

int main()
{

    constexpr size_t length = 4;
    int array[] = { 9, 18, 6, 12 };

    cout << greatesCommonDivisor(array, length);
}
