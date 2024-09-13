// HW.4_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете функция, която приема цяло число и връща броя на цифрите му.

//Вход: 4, Изход : 1

//Вход : -4, Изход : 1

//Вход : 5430 Изход : 4

unsigned myModule(int number)
{
    if (number < 0)
    {
        return (number * (-1));
    }

    return number;
}

unsigned countDigits(int& number)
{
    number = myModule(number);

    unsigned counter = 0;

    while (number != 0)
    {
        counter++;
        number /= 10;
    }
    return counter;
}

int main()
{
    int number;
    cout << "Input number: ";
    cin >> number;

    cout << "Digits count: " << countDigits(number);
}
