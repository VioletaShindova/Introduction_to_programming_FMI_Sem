// Sem.14_MergeSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Implementation of a merge sort

void printArray(const int* array, const size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
    return;
}

void swapValues(int& firstValue, int& secondValue)
{
    int temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;
}

void bubbleSort(int* array, const size_t size)
{
    unsigned lastIndexSwap = size - 1;
    for (size_t i = 0; i < size - 1; i++)
    {
        unsigned lastIndexSwapTemp = 0;
        for (size_t j = 0; j < lastIndexSwap; j++)
        {
            if(array[j] > array[j+1])
            {
                swapValues(array[j], array[j + 1]);
                lastIndexSwapTemp = j;
            }
        }
        if (lastIndexSwapTemp == 0)
        {
            return;
        }
        lastIndexSwap = lastIndexSwapTemp;
    }
}

void insertionSort(int* array, const size_t size)
{
    for (size_t i = 1; i < size; i++)
    {
        int currentElement = array[i];
        unsigned currentIndex = i - 1;
        while (currentIndex >= 0 && array[currentIndex] > currentElement)
        {
            array[currentIndex + 1] = array[currentIndex];
            currentIndex--;
        }
        array[currentIndex + 1] = currentElement;
    }
}

void selectionSort(int* array, const size_t size)
{
    for (size_t i = 0; i < size - 1; i++)
    {
        unsigned currentSmallestElementIndex = i;
        for (size_t j = i + 1; j < size; j++)
        {
            if (array[currentSmallestElementIndex] > array[j])
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

void mergeSort(const int* firstArray, const size_t firstSize, const int* secondArray, const size_t secondSize)
{
    int* resultArray = new int[firstSize + secondSize];

    unsigned pointerOne = 0;
    unsigned pointerTwo = 0;
    unsigned resArrayIndex = 0;

    while (pointerOne < firstSize && pointerTwo < secondSize)
    {
        if (firstArray[pointerOne] <= secondArray[pointerTwo])
        {
            resultArray[resArrayIndex++] = firstArray[pointerOne++];
        }
        else
        {
            resultArray[resArrayIndex++] = secondArray[pointerTwo++];
        }
    }

    while (pointerOne < firstSize)
    {
        resultArray[resArrayIndex++] = firstArray[pointerOne++];
    }

    while (pointerTwo < secondSize) 
    {
        resultArray[resArrayIndex++] = secondArray[pointerTwo++];
    }

    for (size_t i = 0; i < length; i++)
    {

    }
    
}

void mergeSortRec(const int* array, const size_t size)
{
    if (size < 2)
    {
        return;
    }

    const unsigned mid = size / 2;
    mergeSortRec(array, mid); //left side
    mergeSortRec(array + mid, size - mid); //right side
    mergeSort(array, mid, array + mid, size - mid);
}

int main()
{
    constexpr size_t SIZE = 6;
    int array[SIZE] = { 5,6,1,3,2,4 };

    mergeSortRec(array, SIZE);
    printArray(array, SIZE);
}
