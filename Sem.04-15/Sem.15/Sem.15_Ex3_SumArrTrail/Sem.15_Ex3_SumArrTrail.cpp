// Sem.15_Ex3_SumArrTrail.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
constexpr size_t SIZE = 4;

unsigned sumArrayTrail(const unsigned array[], const unsigned size, unsigned sum = 0)
{
    if (size == 0)
    {
        return sum;
    }
        
    return (sumArrayTrail(array + 1, size - 1, sum + array[0]));
}

int main()
{
    unsigned array[SIZE] = { 1,2,3,4 };
    cout << sumArrayTrail(array, SIZE);
    return 0;
}

