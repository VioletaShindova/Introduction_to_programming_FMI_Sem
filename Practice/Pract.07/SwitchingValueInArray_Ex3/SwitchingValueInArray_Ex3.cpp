// SwitchingValueInArray_Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number = 0;

    do
    {
        cout << "Input whole number less than 61 = ";
        cin >> number;
    } while (number > 60);

    constexpr int length = 60;
    int firstArray[length];
    int secondArray[length];

    for (int i = 0; i < number; i++)
    {
        cin >> firstArray[i];
    }

    int indexOfLastElement = number - 1;
    for (int i = 0, j = indexOfLastElement; i < number; i++)
    {
        secondArray[i] = firstArray[j];
        j--;
    }

    for (int i = 0; i < number; i++)
    {
        if (i == indexOfLastElement)
        {
            cout << secondArray[i];
        }
        else
        {
            cout << secondArray[i] << ", ";
        }
    }


}
