// HW.05_Ex1_SortNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void sortNumer(unsigned& number)
{
    int temp = 9;
    unsigned newNumber = 0;
    unsigned tempNumber = number; //hold the value of the initial number value

    while (temp > -1)
    {
        if (number % 10 == temp)
        {
            (newNumber *= 10) += (number % 10);
        }

        if (number / 10 == 0)
        {
            number = tempNumber;
            temp--;
            continue;
        }

        number /= 10;
    }
    number = newNumber;
    return;
}

int main()
{
    unsigned number;
    cout << "Input a positive number: ";
    cin >> number;
    sortNumer(number);
    cout << number;
}
