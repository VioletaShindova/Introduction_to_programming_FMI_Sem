// HW.04_Ex9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функция, която приема естествено число и връща ново число, което има същите цифри, но в сортиран вид.

//Вход: 531261, Изход : 112356

unsigned sortNumber(unsigned number)
{
    unsigned temp = 1;
    unsigned newNumber = 0;
    unsigned tempNumber = number; //521261

    while (temp < 10)
    {
        if (number % 10 == temp)
        {
            (newNumber *= 10) += (number % 10);
        }

        if (number / 10 == 0)
        {
            number = tempNumber;
            temp++;
            continue;
        }
        number /= 10;
    }
    return newNumber;
}

int main()
{
    unsigned number;
    cout << "Input a natural number: ";
    cin >> number;

    cout << sortNumber(number);
}
