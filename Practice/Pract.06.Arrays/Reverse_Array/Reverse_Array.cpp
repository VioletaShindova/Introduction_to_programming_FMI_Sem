// Reverse_Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap(int& firstElement, int& secondElement)
{
    int temp = firstElement;
    firstElement = secondElement;
    secondElement = temp;

}

void reverse(int array[], const unsigned length)
{
    for (unsigned i = 0; i < length / 2; i++)
    {
        swap(array[i], array[length - i - 1]); //i need to understand that
    }   
}

void fillingArray(int array[], const unsigned length)
{
    cout << "Input values of the array: " << endl;

    for (unsigned i = 0; i < length; i++)
    {
        cin >> array[i];
    }
}

int main()
{
    constexpr unsigned maxSize = 1024;
    cout << "Input size of the array: ";
    unsigned newSize;
    cin >> newSize;
    int array[maxSize];
    fillingArray(array, newSize);
    reverse(array, newSize);
    for (unsigned i = 0; i < newSize; i++)
    {
        cout << array[i] << " ";
    }
}

