// Sem.08_Ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функция, която по подадено цяло число n и цяло число k и връща числото, което е "закодирано" в последните k бита на n.

//Вход: 15 2, Изход : 3

//Вход : 189 3, Изход : 5

//Вход : 189 4, Изход : 13

unsigned createNewNumberWithTheLastFewPositions(int number, int positions)
{
    unsigned newNumber = 1;
    while (positions != 0)
    {
        unsigned mask = 1;
        newNumber |= (mask & number);

        if (positions - 1 == 0)
        {
            break;
        }

        number >>= 1;
        newNumber <<= 1;
        positions--;
    }
    return newNumber;
}

int main()
{
    int number;
    cout << "Input a number: ";
    cin >> number;

    int position;
    cout << "Input a position: ";
    cin >> position;

    cout << createNewNumberWithTheLastFewPositions(number, position);
}

