// Palindrom_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//EX 1

#include <iostream>
using namespace std;

bool checkValues(const int firstElement, const int secondElement)
{
    return (firstElement == secondElement);
}

void reverseValues(const int array[], const unsigned size)
{
    bool result = false;
    for (unsigned i = 0; i < size / 2; i++)
    {
        result = checkValues(array[i], array[size - i - 1]);

        if (!(result))
        {
            break;
        }
    }

    if (result)
    {
        cout << "The array IS a palindrome!";
    }
    else
    {
        cout << "The array is NOT a palindrome!";
    }
}

void fillArray(int array[], const size_t length)
{
    cout << "Input values of the array: " << endl;
    for (unsigned i = 0; i < length; i++)
    {
        cin >> array[i];
    }
}

int main()
{
    constexpr unsigned max_Size = 1024;
    cout << "Input size of the array: ";
    unsigned int size = 0;
    cin >> size;
    int array[max_Size];
    fillArray(array, size);
    reverseValues(array, size);
}