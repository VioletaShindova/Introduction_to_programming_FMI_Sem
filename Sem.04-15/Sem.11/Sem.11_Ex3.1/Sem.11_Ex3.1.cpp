// Sem.11_Ex3.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Да се напише функция, която приема масив от целия числа, 
//който е получен след конкатенация на два сортирани масив, и го сортира.

void merge(const int* array1, const size_t size1, const int* array2, const size_t size2, int* result)
{
    if (!array1 || !array2)
    {
        return;
    }

    unsigned array1Index = 0;
    unsigned array2Index = 0;
    unsigned resultIndex = 0;

    while ((array1Index < size1) && (array2Index < size2))
    {
        if(array1[array1Index] <= array2[array2Index])
        {
            result[resultIndex++] = array1[array1Index++];
        }
        else
        {
            result[resultIndex++] = array2[array2Index++];
        }
    }


    //just in case
    while (array1Index < size1)
    {
        result[resultIndex++]= array1[array1Index++];
    }

    while (array2Index < size2)
    {
        result[resultIndex++] = array2[array2Index++];
    }
}

int getBound(int* array, const size_t size)
{
    if (!array)
    {
        return -1;
    }

    for (size_t i = 0; i < size - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            return i + 1;
        }
    }

    return -1; 
}

void sortArrayConcatOfTwoSortedArrays(int* array, const size_t size)
{
    if (!array)
    {
        return;
    }

    int secondArrayStartIndex = getBound(array, size);

    if (secondArrayStartIndex == -1) //means the array is sorted
    {
        return;
    }

    int* temp = new int[size];

    merge(array, secondArrayStartIndex, array + secondArrayStartIndex, size - secondArrayStartIndex, temp);

    for (int i = 0; i < size; i++)
        array[i] = temp[i];

    delete[] temp;
}

int main()
{
    constexpr size_t arraySize = 6;
    int array[] = { 1, 5, 9, 12, 4, 7 };

    sortArrayConcatOfTwoSortedArrays(array, arraySize);

    for (size_t i = 0; i < arraySize; i++)
    {
        cout << array[i] << ' ';
    }
    return 0;
}

