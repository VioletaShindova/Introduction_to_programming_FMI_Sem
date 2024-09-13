// HW.04_Ex11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функция, която приема символ и връща съответната главна буква(ако подадения символ е малък символ)

//Вход: 'а', Изход : 'А'

//Вход : '!', Изход : '!' //или грешка

char toCapitalLetter(char symbol)
{
    switch (symbol)
    {
        case 'a': symbol = 'A'; break;
        case 'b': symbol = 'B'; break;
        case 'c': symbol = 'C'; break;
        case 'd': symbol = 'D'; break;
        case 'e': symbol = 'E'; break;
        case 'f': symbol = 'F'; break;
        case 'g': symbol = 'G'; break;
        case 'h': symbol = 'H'; break;
        case 'i': symbol = 'I'; break;
        case 'j': symbol = 'J'; break;
        case 'k': symbol = 'K'; break;
        case 'l': symbol = 'L'; break;
        case 'm': symbol = 'M'; break;
        case 'n': symbol = 'N'; break;
        case 'o': symbol = 'O'; break;
        case 'p': symbol = 'P'; break;
        case 'q': symbol = 'Q'; break;
        case 'r': symbol = 'R'; break;
        case 's': symbol = 'S'; break;
        case 't': symbol = 'T'; break;
        case 'u': symbol = 'U'; break;
        case 'v': symbol = 'V'; break;
        case 'w': symbol = 'W'; break;
        case 'x': symbol = 'X'; break;
        case 'y': symbol = 'Y'; break;
        case 'z': symbol = 'Z'; break;
        default: break;
    }
    return symbol;
}

bool isSmallLetter(char symbol)
{
    return (symbol >= 'a' && symbol <= 'z');
}

int main()
{
    char symbol;
    cout << "Input symbol: ";
    cin >> symbol;

    if (isSmallLetter(symbol))
    {
        cout << toCapitalLetter(symbol);
    }
    else
    {
        cout << symbol;
    }
}
