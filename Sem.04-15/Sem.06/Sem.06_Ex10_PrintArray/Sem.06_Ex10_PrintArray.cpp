// Sem.06_Ex10_PrintArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printArrayReversed(unsigned array[], size_t size)
{
    for (int i = size - 1; i >= 0; i--) //here should be int because using size_t can cause an infinite loop since it is always true
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void printArray(unsigned array[], const size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return;
}

void setValuesInArray(unsigned array[], const size_t& size)
{
    for (size_t i = 0; i < size; i++)
    {
        array[i] = i;
    }
    return;
}

int main()
{
    constexpr size_t size = 5;
    unsigned array[size];

    setValuesInArray(array, size);
    printArray(array, size);
    printArrayReversed(array, size);

    return 0;

    
}
