// Sem.06_Ex9_LinearSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете фунцкия, която намира елемент в несортиран масив, като използвате линейно търсене.

int linearSearch(unsigned array[], size_t size, unsigned element)
{
    for (size_t i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return 1;
        }
    }
    
    return -1;
}

int main()
{
    constexpr size_t ARR_SIZE = 5;
    unsigned array[ARR_SIZE] = { 1,5,2,4,9 };
    unsigned findElement = 0;

    bool containsElement = (linearSearch(array, ARR_SIZE, findElement) >= 0);

    if (containsElement)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

}

