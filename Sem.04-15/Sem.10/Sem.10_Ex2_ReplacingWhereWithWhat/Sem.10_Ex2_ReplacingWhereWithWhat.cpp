// Sem.10_Ex2_ReplacingWhereWithWhat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функция, която приема 3 стринга - text, where и what и земства в text всяко срещане на where с what.

//Да се реши без допълнителна памет(in - place).

//Вход: "I am the best of the best", "best", "worst", Изход : "I am the worst of the worst"

unsigned myStrlen(const char* text)
{
    if (!text)
    {
        return 0;
    }

    unsigned counter = 0;
    while (*text)
    {
        counter++;
        text++;
    }
    return counter;
}

void fillArray(char* newText, unsigned& currentIndex, const char* what)
{
    if (!newText || !what)
    {
        return;
    }

    while (*what)
    {
        newText[currentIndex] = *what;
        currentIndex++;
        what++;
    }
    return;
}

void replaceText(char* text, const char* where, const char* what)
{
    const size_t whereLength = myStrlen(where);
    const size_t whatLength = myStrlen(what);
    size_t differenceOfLengths = whatLength - whatLength;
    char newText[100] = "z";

    unsigned currentIndex = 0;

    while (*text)
    {
        if (*text == *where)
        {
            fillArray(newText, currentIndex,what);
            text += whereLength;
            continue;
        }
        newText[currentIndex] = *text;
        currentIndex++;
        text++;
    }
    cout << newText;
}

int main()
{
    char text[30] = "I am the best of the best";
    char where[] = "best";
    char what[] = "worst";
    replaceText(text, where, what);
}
