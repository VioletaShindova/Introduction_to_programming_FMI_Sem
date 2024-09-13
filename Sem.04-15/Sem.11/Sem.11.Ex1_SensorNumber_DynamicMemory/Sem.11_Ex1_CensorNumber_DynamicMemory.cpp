// Sem.11.Ex1_CensorNumber_DynamicMemory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Да се напише функция, която приема стринг и връща нов стринг, за който е заделена точно количество памет,
//в който всички числа се цензурирани

bool checkIfDigit(const char symbol)
{
    return (symbol >= '0' && symbol <= '9');
}

unsigned countNumbersInText(const char* text, unsigned length)
{
    if (!text)
    {
        return 0;
    }

    unsigned numbersCounter = 0;
    unsigned digitsCounter = 0;
    bool foundNumbers = false;

    while (*text)
    {
        foundNumbers = checkIfDigit(*text);
        if (foundNumbers)
        {
            digitsCounter++;
            if (!checkIfDigit(*(text + 1)))
            {
                numbersCounter++;
                foundNumbers = false;
            }
        }
        length++;
        text++;
    }

    return ((length - digitsCounter) + numbersCounter);
}

void censorNumber(const char* text)
{
    if (!text)
    {
        return;
    }

    unsigned newTextLength = countNumbersInText(text, 0);

    char* censoredText = new char[newTextLength + 1];

    bool isNumber = false;
    unsigned currentIndex = 0;

    while (*text)
    {
        if (checkIfDigit(*text))
        {
            if (isNumber)
            {
                text++;
                continue;
            }
            isNumber = true;
            censoredText[currentIndex] = '*';
            currentIndex++;
            //*censoredText = '*';
            //censoredText++;
        }
        else
        {
            isNumber = false;
            censoredText[currentIndex] = *text;
            currentIndex++;
            //*censoredText = *text;
            //censoredText++;
        }

        text++;
    }
    censoredText[currentIndex] = '\0';
    cout << censoredText;
    delete[] censoredText;
}

int main()
{
    char text[] = "abc1234dgg4fsdg5";

    censorNumber(text);
}
