// Sem.15_Ex5.2_High_Order_Functions_Int_Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

constexpr size_t ARRAY_SIZE = 6;

bool checkIfElementIsEven(const int& element)
{
    unsigned mask = 1;
    return !(mask & element);
}

bool checkIfElementIsOdd(const int& element)
{
    unsigned mask = 1;
    return (mask & element);
}

bool checkIfElementIsPositive(const int& element)
{
    return (element > 0);
}

void filterArrayOfNumners(const int array[], bool(*func)(const int&))
{
    for (size_t i = 0; i < ARRAY_SIZE; i++)
    {
        if (func(array[i]))
        {
            cout << array[i] << ' ';
        }
    }
    return;
}

int main()
{
    int array[ARRAY_SIZE] = { 3, 4, 5, -2, 6, -8 };
    size_t sizeOfNewArray = 0;

    cout << "Print all the EVEN numbers in the array: " << endl;
    filterArrayOfNumners(array, checkIfElementIsEven);
    cout << endl;
    cout << "Print all the ODD numbers in the array: " << endl;
    filterArrayOfNumners(array, checkIfElementIsOdd);
    cout << endl;
    cout << "Print all the POSITIVE numbers in the array: " << endl;
    filterArrayOfNumners(array, checkIfElementIsPositive);

    return 0;
}

