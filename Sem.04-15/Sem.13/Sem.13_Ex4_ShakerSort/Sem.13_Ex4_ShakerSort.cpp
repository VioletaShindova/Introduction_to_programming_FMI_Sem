// Sem.13_Ex4_ShakerSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swapElements(int& firstElement, int& secondElement)
{
    int temp = firstElement;
    firstElement = secondElement;
    secondElement = temp;
}

void shakerSort(int* array, const size_t SIZE)
{
    unsigned lastSwappedIndex = SIZE - 1;
    for (size_t i = 0; i < SIZE; i++)
    {
        unsigned lastSwappedIndexTemp = 0;
        for (size_t j = 0; j < lastSwappedIndex; j++)
        {
            if (array[j] > array[j + 1]) 
            {
                swapElements(array[j], array[j + 1]);
                lastSwappedIndexTemp = j;
            }
        }
        if (lastSwappedIndex == 0)
        {
            return;
        }
        lastSwappedIndex = lastSwappedIndexTemp;
    }
}

void printArray(const int* array, const size_t SIZE)
{
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << array[i] << ' ';
    }
}

int main()
{
    constexpr size_t SIZE = 5;
    int array[SIZE] = { 5,4,3,2,1 };

    shakerSort(array, SIZE);
    printArray(array, SIZE);
}
