// Min&MaxInArray_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    int min = array[lastElementPlace];
    int max = array[0];

    //a mistake
    for (int i = 0, j = 0; i < number; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }

        if (array[j] < min)
        {
            min = array[j];
        }

        j++;
    }

    cout << "Min is " << min << endl;
    cout << "Max is " << max;
}

