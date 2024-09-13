// Sem.04_Ex7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете функция, която приема две естествени числа и връща n^ k.
//Вход: 4 5, Изход : 1024

unsigned power(unsigned& number, unsigned& powerNumber)
{
    if (powerNumber == 0)
    {
        return 1;
    }

    powerNumber--;

    while (powerNumber != 0)
    {
        number *= number;
        powerNumber--;
    }
    return number;
}

int main()
{
    unsigned number = 0;
    do
    {
        cout << "Input a positive number: ";
        cin >> number;
    } while (number == 0);

    unsigned powerNumber;
    cout << "Input a positive power: ";
    cin >> powerNumber;

    cout << power(number, powerNumber);
}

