// BinarySearchRec_Ex6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


bool binarySearch(const int* arr, size_t size, int searched)
{
    if (!size)
    {
        return false;
    }

    int mid = size / 2;

    if (arr[mid] == searched)
    {
        return true;
    }
    else if (searched < arr[mid])
    {
        return binarySearch(arr, mid, searched);
    }
    else
    {
        return binarySearch(arr + mid + 1, size - mid - 1, searched);
    }
}

int main()
{
    int arr[] = { 1,5,7,12,14,20 };

    cout << binarySearch(arr, 6, 5);

    return 0;
}   
