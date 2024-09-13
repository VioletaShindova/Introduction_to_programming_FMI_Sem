// Sem.07_Ex1_FromDecimalToBinary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете програма, която конвертира число от десетична в двоична бройна система, като използвате масиви.

void printArray(bool array[], const size_t length)
{
    for (size_t i = 0; i < length; i++)
    {
        cout << array[i] << endl;
    }
}

void swapValues(bool& firstElement, bool& secondElement)
{
    bool temp = firstElement;
    firstElement = secondElement;
    secondElement = temp;
}

void reverseArray(bool array[], unsigned length)
{
    unsigned tempLength = length / 2;
    for (size_t i = 0; i < tempLength; i++)
    {
        swapValues(array[i], array[length - 1 - i]);
    }
    return;
}

void convertDecimalToBinary(unsigned number, bool array[])
{
    unsigned index = 0;
    while (number != 0)
    {
        array[index] = number % 2;
        index++;
        number /= 2;
    }

    reverseArray(array, index);
    printArray(array, index);
    return;
}

int main()
{
    unsigned number;
    cout << "Input a number: ";
    cin >> number;

    constexpr size_t size = 1024;
    bool array[size];

    convertDecimalToBinary(number, array);
    return 0;
}

