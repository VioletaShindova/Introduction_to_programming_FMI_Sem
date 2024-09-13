// Sem.06_Ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Да се напише функция, която приема масив и връща дали е конкатенация на два масива, които са палиндроми.

//Вход: [1 2 3 2 1 4 5 5 4] , Изход : true

//Вход : [1 2 3 4 5] , Изход : false

//Вход : [1 2 3 2 1] , Изход : true


bool isPalindrome(const unsigned array[], const size_t& length)
{
    bool result = true;
    size_t size = length / 2;
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
    constexpr size_t length = 5;
    unsigned array[] = { 1, 2, 3, 2, 1};

    unsigned firstArray[9];
    unsigned secondArray[9];

    unsigned index = 1;

    while (index < length)
    {
        if (array[index] == array[0])
        {
            break;
        }

        index++;
    }

    if (isPalindrome(array, index + 1) &&  isPalindrome(array + index + 1, length - 1 - index))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}

