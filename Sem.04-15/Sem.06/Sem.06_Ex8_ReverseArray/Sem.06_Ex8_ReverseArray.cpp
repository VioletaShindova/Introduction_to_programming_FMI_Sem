// Sem.06_Ex8_ReverseArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void mySwap(int& firstElement, int& secondElement)
{
    int temp = firstElement;
    firstElement = secondElement;
    secondElement = temp;
}

void reverse(int arr[], const size_t size)
{
    unsigned tempSize = size / 2;
    for (size_t i = 0; i < tempSize; i++)
    {
        mySwap(arr[i], arr[size - i - 1]);
    }
}

int main()
{
    constexpr size_t size = 5;
    int arr[size] = { 1, 2, 3, 4 , 5};
    reverse(arr, size);

    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

