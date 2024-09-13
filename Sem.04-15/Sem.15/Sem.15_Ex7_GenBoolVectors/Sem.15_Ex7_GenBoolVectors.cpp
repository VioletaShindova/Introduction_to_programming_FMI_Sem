// Sem.15_Ex7_GenBoolVectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool areZerosAndOnesEqual(const bool* arr, size_t size)
{
    int zeros = 0, ones = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            zeros++;
        else
            ones++;
    }
    return zeros == ones;
}

void genBoolVectors(bool* array, const size_t size, bool(*filter)(const bool* arr, size_t size), unsigned beginIndex = 0)
{
    if (beginIndex == size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
        return;
    }
    array[beginIndex] = 0;
    genBoolVectors(array, size, filter, beginIndex + 1);
    array[beginIndex] = 1;
    genBoolVectors(array, size, filter,beginIndex + 1);
}

int main()
{
    const size_t size = 4;
    bool arr[4];

    genBoolVectors(arr, size, areZerosAndOnesEqual);
}

