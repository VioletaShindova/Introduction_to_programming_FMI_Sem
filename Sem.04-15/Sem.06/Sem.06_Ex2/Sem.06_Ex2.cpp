// Sem.06_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Да се напише функция, която приема масив и връща най - малкото общо кратно на числата в масива.

//Вход: [9 18 6 12] , Изход : 36

unsigned greaterCommonDivisor(const unsigned& firstNumber, const unsigned& secondNumber)
{
    for (size_t i = firstNumber; i >= 2; i--)
    {
        if (firstNumber % i == 0 && secondNumber % i == 0)
        {
            return i;
        }
    }
    return 1;
}

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

unsigned smallestCommonMultiple(unsigned firstNumber, unsigned secondNumber)
{
    checkValues(firstNumber, secondNumber);

    return (firstNumber * secondNumber) / greaterCommonDivisor(firstNumber, secondNumber);
}

unsigned leastCommonMultiple(int array[], const size_t& length)
{
    unsigned gcm = smallestCommonMultiple(array[0], array[1]);
    for (size_t i = 0; i < length; i++)
    {
        unsigned temp = smallestCommonMultiple(gcm, array[i]);
        if (temp < gcm)
        {
            gcm = temp;
        }
    }
    return gcm;
}

int main()
{
    constexpr size_t length = 4;
    int array[] = { 9, 18, 6, 12 };

    cout << leastCommonMultiple(array, length);
}
