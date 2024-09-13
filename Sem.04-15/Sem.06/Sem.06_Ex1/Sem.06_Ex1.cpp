// Sem.06_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Да се напише функция, която приема масив и връща дали е палиндром.

//Вход: [1 2 3 2 1] , Изход : true

bool isPalindrome(const unsigned array[], const size_t length)
{
    size_t size = length / 2;
    bool result = true;
    for (size_t i = 0; i < size; i++)
    {
        if (array[i] != array[length - 1 - i])
        {
            result = false;
            break;
        }
    }
    return result;
}

int main()
{
    constexpr size_t length = 6;
    unsigned array[] = { 1, 2, 3, 3, 2, 1 };

    if (isPalindrome(array, length))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

