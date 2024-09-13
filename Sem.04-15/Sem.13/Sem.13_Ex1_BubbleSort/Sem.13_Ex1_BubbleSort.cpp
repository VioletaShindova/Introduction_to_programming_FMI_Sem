// Sem.13_Ex1_BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Implementation of a bubble sort
 
const unsigned MYNULL = 0;

void printArray(const unsigned* array, const size_t SIZE)
{
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << array[i] << ' ';
    }
    return;
}

void swapNums(unsigned& firstElement, unsigned& secondElement)
{
    unsigned temp = firstElement;
    firstElement = secondElement;
    secondElement = temp;

    return;
}

void bubbleSort(unsigned* array, const size_t size)
{
    unsigned lastIndexSwap = size - 1;
    for (size_t i = 0; i < size - 1; i++)
    {
        unsigned lastIndexSwapTemp = MYNULL;
        for (size_t j = 0; j < lastIndexSwap; j++)
        {
            if (array[j] > array[j + 1])
            {
                swapNums(array[j], array[j + 1]);
                lastIndexSwapTemp = j;
            }
        }
        if (lastIndexSwapTemp == MYNULL)
        {
            return;
        }

        lastIndexSwap = lastIndexSwapTemp;
    }
}

int main()
{
    constexpr size_t SIZE = 5;
    unsigned array[SIZE] = { 1,4,5,2,3 };

    bubbleSort(array, SIZE);
    printArray(array, SIZE);
}

