// Sem.10_Ex5_FindTheMostFamousWordInAText.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете функция, която приема стринг и връща най - често срещаната дума.
//(Думите са разделени с произволен брой интервали, табулации и препинателни знаци).
//Игнорираме разликата между главни и малки букви за задачата.

//Вход: "Me? Why always me?, Изход: me

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

void myStrcpy(const char* text, char* pattern)
{
    if (!text || !pattern)
    {
        return;
    }

    while (*text)
    {
        (*pattern) = (*text);
        pattern++;
        text++;
    }

    *pattern = '\0';

    return;
}

bool isLetter(const char symbol)
{
    return ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z'));
}

void fillArray(char* word, const char* text, size_t startPoint, const size_t endPoint)
{
    if (!text)
    {
        return;
    }

    unsigned counter = 0;
    while (startPoint != endPoint)
    {
        if (isLetter(text[startPoint]))
        {
            word[counter] = text[startPoint];
            counter++;
        }
        startPoint++;
    }

    word[counter] = '\0';

    return;
}

unsigned countWordsFunc(const char* word, const char* text)
{
    if (!text || !word)
    {
        return 0;
    }

    unsigned counter = 0;
    unsigned index = 0;
    while (*text)
    {
        if (*text == word[index])
        {
            if (word[index + 1] == '\0')
            {
                counter++;
                index = 0;
            }
            index++;
        }
        text++;
    }
    return counter;
}

void toLower(char* text)
{
    if (!text)
    {
        return;
    }

    while (*text)
    {
        if (*text >= 'A' && *text <= 'Z')
        {
            (*text) = (*text + ('a' - 'A'));
        }

        text++;
    }

    return;
}

void findTheMostFamousWord(char* text)
{
    if (!text)
    {
        return;
    }

    toLower(text);
    unsigned textLength = myStrlen(text);
    size_t startPoint = 0;
    char mostFamousWord[45] = "";
    unsigned counterWordsRes = 1;
    bool firstWord = false;
    for (size_t i = 0; i <= textLength; i++) //i need to know when the array has reached its end
    {
        if (text[i] == ' ' || text[i] == '\0')
        {
            char word[45];
            fillArray(word, text, startPoint, i);

            unsigned countWordsTemp = countWordsFunc(word, text);
            if (countWordsTemp > counterWordsRes)
            {
                counterWordsRes = countWordsTemp;
                fillArray(mostFamousWord, word, 0, 45);
            }
            
            startPoint = i + 1;
        }
    }
   
    cout << mostFamousWord;
}

int main()
{
    char text[] = "me? Why always me?";
    findTheMostFamousWord(text);
}

