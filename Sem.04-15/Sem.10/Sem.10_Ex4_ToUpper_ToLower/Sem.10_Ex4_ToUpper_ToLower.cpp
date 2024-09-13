// Sem.10_Ex4_ToUpper_ToLower.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функции toUpper и toLower, които приемат стринг и променят всички главни букви в малки 
//и всички малки букви в главни.

void switchLetter(char* text)
{
    if (*text >= 'A' && *text <= 'Z')
    {
        *text = *text + ('a' - 'A');
    }
    else if (*text >= 'a' && *text <= 'z')
    {
        *text = *text - ('a' - 'A');
    }
    else
    {
        return;
    }
}

void toUpperOrLower(char* text)
{
    if (!text)
    {
        return;
    }

    while (*text)
    {
        switchLetter(text);
        text++;
    }
}

int main()
{
    char text[] = "I am the BEST of THE best";
    toUpperOrLower(text);
    cout << text;
}