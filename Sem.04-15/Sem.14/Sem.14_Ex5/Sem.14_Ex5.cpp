// Sem.14_Ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Да се реализира рекурсивна функция, която приема произволен масив и число 
// и връща дали числото се съдържа в масива. (Линейно търсене).

bool linearSearch(const int* array, const size_t size, const int element)
{
    if (size == 0)
    {
        return 0;
    }

    return ((array[0] == element) || linearSearch(array + 1, size - 1, element));
    
}

int main()
{
    int array[] = { 1,2,5,3,1 };
    cout << linearSearch(array, 5, 1);
}

