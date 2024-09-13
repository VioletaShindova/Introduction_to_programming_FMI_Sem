// FindMin_Ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sumElementsInArray(const int array[], const int& size)
{
    unsigned sum = 0;
    for (unsigned i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}

void findMinAndPointToIt( int array1[],  int array2[], 
                            const int& size1, const int& size2,  int*& ptr, int& size) //int*& - take the address of the pointer
{
    if (sumElementsInArray(array1, size1) <= sumElementsInArray(array2, size2))
    {
        ptr = array2;
        size = size2;
    }
    else
    {
        ptr = array1;
        size = size1;
    }
}

void printArray(const int* ptr, const int& size)
{
    for (unsigned i = 0; i < size; i++)
    {
        cout << ptr[i] << " ";
    }
}

int main()
{
    int arr1[]{ 1, 2, 3, 4, 5 };
    int arr2[]{ 9, 9, 9 };
    int* ptr;
    int size;

    findMinAndPointToIt(arr1, arr2, 5, 3, ptr, size);

    printArray(ptr, size);
}

