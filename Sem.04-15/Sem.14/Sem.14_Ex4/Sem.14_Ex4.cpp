// Sem.14_Ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Да се реализира рекурсивна функция, която приема масив от цели числа и връща сумата на елементите в него.

unsigned sumOfElements(const int* array, const size_t SIZE)
{
    if (SIZE == 0)
    {
        return 0;
    }

    return array[0] + sumOfElements(array + 1, SIZE - 1);
}

int main()
{
    constexpr size_t SIZE = 5;
    int numericArray[SIZE] = { 5, 2, -3, 4, 1 };

    cout << sumOfElements(numericArray, SIZE);
}
