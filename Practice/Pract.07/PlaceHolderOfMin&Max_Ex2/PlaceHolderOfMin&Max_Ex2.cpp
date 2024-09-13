// PlaceHolderOfMin&Max_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int number = 0;

    do
    {
        cout << "Input whole number n = ";
        cin >> number;
    } while (number > 60);

    constexpr int length = 60;
    int array[length];


    for (int i = 0; i < number; i++)
    {
        cin >> array[i];
    }

    const int lastElementPlace = number - 1;

    //another way
    int min = INT16_MAX;
    int max = INT16_MIN;
    int minHolder = 0; //2
    int maxHolder = 0; //4

    //find min and max and get index
    for (int i = 0, j = 0; i < number; i++)
    {   
        if (array[i] > max)
        {
            max = array[i]; 
            maxHolder = i;
        }

        if (array[j] < min)
        {
            min = array[j];
            minHolder = j;
        }

        j++;
    }

    int numberHolder = 0;

    //switching values
    for (int i = 0; i < number; i++)
    {
        if (i == minHolder) 
        {
            numberHolder = array[minHolder];
            array[i] = array[maxHolder];
        }
        else if (i == maxHolder)
        {
            array[i] = numberHolder;
        }
    }

    //Output array
    for (int i = 0; i < number; i++)
    {
        cout << array[i] << ", ";
    }
}
