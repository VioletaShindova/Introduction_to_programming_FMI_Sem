// Sem.14_Ex9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Да се реализира рекурсивна функция, която чете стринг и връща броя на малките и големите символи в него.

bool isUpperLetter(const char symbol)
{
    return (symbol >= 'A' && symbol <= 'Z');
}

bool isLowerLetter(const char symbol)
{
    return (symbol >= 'a' && symbol <= 'z');
}

void countLowerAndUpperLettersRec(const char* text, unsigned& countLowerLetters, unsigned& countUpperLetters)
{
    if (!(*text))
    {
        return;
    }

    if (isLowerLetter(*text))
    {
        countLowerLetters++;
    }
    else if (isUpperLetter(*text))
    {
        countUpperLetters++;
    }
    
    return countLowerAndUpperLettersRec(text + 1, countLowerLetters, countUpperLetters);
}

int main()
{
    char text[] = "aifwqI4A12Oo1a";
    unsigned countLowerLetters = 0;
    unsigned countUpperLetters = 0;

    countLowerAndUpperLettersRec(text, countLowerLetters, countUpperLetters);

    cout << "Lower letters count: " << countLowerLetters << endl;
    cout << "Upper letters count: " << countUpperLetters << endl;
}
