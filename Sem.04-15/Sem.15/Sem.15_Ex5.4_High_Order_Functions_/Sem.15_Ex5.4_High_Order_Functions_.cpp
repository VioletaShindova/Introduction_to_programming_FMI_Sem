// Sem.15_Ex5.4_High_Order_Functions_.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned chooseOperation()
{
    cout << "Choose operation: " << endl;
    cout << "1. Double the values: " << endl;
    cout << "2. Add 10 to each value: " << endl;
    cout << "3. Mulptiplicate each value with a certain coefficient: " << endl;

    unsigned result = 0;
    cin >> result;
    return result;
}

void printArray(const int* array, const size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
    return;
}

int* fillArray(const size_t size)
{
    cout << "Fill array: " << endl;
    int* ptr = new int[size];
    for (size_t i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }
    return ptr;
}

void modifyArray(int* array, const size_t size, void(*func)(int* array, const size_t))
{
    func(array, size);
    return;
}

void doubleEachValueOfTheArray(int* array, const size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        array[i] *= array[i];
    }
    return;
}

void addTenToEachElement(int* array, const size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        array[i] += 10;
    }
    return;
}

void multiplicateEachElementWithCertainInputValue(int* array, const size_t size)
{
    unsigned coefficient;
    cout << "Input coefficient: ";
    cin >> coefficient;

    for (size_t i = 0; i < size; i++)
    {
        array[i] *= coefficient;
    }
    return;
}

int main()
{
    size_t sizeOfArray = 0;
    cout << "Input size of the array: ";
    cin >> sizeOfArray;

    int* array = fillArray(sizeOfArray);

    unsigned result = chooseOperation();

    switch (result)
    {
    case 1: modifyArray(array, sizeOfArray, doubleEachValueOfTheArray); break;
    case 2: modifyArray(array, sizeOfArray, addTenToEachElement); break;
    case 3: modifyArray(array, sizeOfArray, multiplicateEachElementWithCertainInputValue); break;
    default: cout << "There isn't such value!"; break;
    }

    printArray(array, sizeOfArray);

    return 0;
}

