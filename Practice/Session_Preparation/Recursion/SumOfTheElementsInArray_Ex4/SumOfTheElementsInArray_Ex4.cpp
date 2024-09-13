// SumOfTheElementsInArray_Ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sumOfArray(int* array, unsigned arrayLen)
{
    if (!arrayLen)
    {
        return 0;
    }

    return ((*array) + sumOfArray(array + 1, arrayLen - 1));
}


int main()
{
    int array[] = {1, 2, -5, 7};

    cout << sumOfArray(array, 4);
}
