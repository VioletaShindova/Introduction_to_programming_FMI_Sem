// Sem.13_Ex3_SelectionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Implementation of a selection sort

void printArray(int* array, const size_t SIZE)
{
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << array[i] << ' ';
    }
    return;
}

void swapValues(int& firstElement, int& secondElement)
{
    int temp = firstElement;
    firstElement = secondElement;
    secondElement = temp;
}

void selectionSort(int* array, const size_t size)
{
    for (size_t i = 0; i < size - 1; i++)
    {
        unsigned currentSmallestElementIndex = i;
        for (size_t j = i + 1;  j < size;  j++)
        {
            if (array[j] < array[currentSmallestElementIndex])
            {
                currentSmallestElementIndex = j;
            }
        }
        if (currentSmallestElementIndex != i)
        {
            swapValues(array[i], array[currentSmallestElementIndex]);
        }
    }
}

int main()
{
    constexpr size_t SIZE = 5;
    int array[SIZE] = { 5,4,3,2,1 };

    selectionSort(array, SIZE);
    printArray(array, SIZE);
}


