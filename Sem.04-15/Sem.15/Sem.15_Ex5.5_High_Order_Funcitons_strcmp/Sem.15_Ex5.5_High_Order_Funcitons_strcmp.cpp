// Sem.15_Ex5.5_High_Order_Funcitons_strcmp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


bool sensitiveToUppertAndLowerLetters(char& firstSymbol, char& secondSymbol)
{
    return (firstSymbol == secondSymbol);
}

bool isUpperLetter(const char& symbol)
{
    return ((symbol >= 'A') && (symbol <= 'Z'));
}

bool isNotSensitiveToUppertAndLowerLetters(char& firstSymbol, char& secondSymbol)
{
    if (isUpperLetter(firstSymbol))
    {
        (firstSymbol += ('a' - 'A'));
    }

    if (isUpperLetter(secondSymbol))
    {
        (secondSymbol += ('a' - 'A'));
    }

    return (firstSymbol == secondSymbol);
}

// - first < second
// 0 first == second
// + first > second
int myStrcmp(char* first, char* second, bool(*func)(char&, char&))
{
    if (!first || !second)
    {
        return false;
    }

    bool result = true;
    while (*first && *second && func(*first, *second))
    {
        second++; 
        first++;
    }
    return (*first - *second);
}

int main()
{
    char firstText[] = "hello";
    char secondText[] = "Hello";
    if (myStrcmp(firstText, secondText, sensitiveToUppertAndLowerLetters) == 0)
    {
        cout << "They are alike";
    }
    else if(myStrcmp(firstText, secondText, isNotSensitiveToUppertAndLowerLetters))
    {
        cout << "They are almost alike";
    }
    else
    {
        cout << "They are not alike";
    }

    return 0;
}


