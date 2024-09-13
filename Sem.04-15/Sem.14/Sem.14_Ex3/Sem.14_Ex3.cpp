// Sem.14_Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Да се реализира рекурсивна функция, която вдига число на дадена степен.

unsigned powerOfANumberRec(unsigned number, unsigned power)
{
    if (power == 0)
    {
        return 1;
    }

    return number * powerOfANumberRec(number, power - 1);
}

int main()
{
    unsigned number;
    cout << "Input number: ";
    cin >> number;

    unsigned power;
    cout << "Input power: ";
    cin >> power;

    cout << powerOfANumberRec(number, power);
    
}

