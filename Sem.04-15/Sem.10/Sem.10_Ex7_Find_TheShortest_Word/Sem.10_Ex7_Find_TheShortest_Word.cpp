// Sem.10_Ex7_Find_TheShortest_Word.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете функция, която приема стринг и връща лексикографско най-малка дума.

//Вход: "Me? Why always me?, Изход: always

bool isCurrentSmallestWordBiggerThanCurrentWord(char* word, char* currentSmallestWord)
{
    while (*word && *currentSmallestWord)
    {
        if (*word < 'a')
        {
            (*word) += 'a' - 'A';
        }

        if (*currentSmallestWord < 'a')
        {
            (*currentSmallestWord) += 'a' - 'A';
        }

        if(*word < *currentSmallestWord)
        {
            return true;
        }
        else if (*word > *currentSmallestWord)
        {
            return false;
        }
        currentSmallestWord++;
        word++;
    }
    return (((*word) == '\0') && ((*currentSmallestWord) != '\0')); //it means that pattern is lexicographicalSmallerWord
}

void myStrcpy(char* destination, const char* source)
{
    if (!destination || !source)
    {
        return;
    }

    while (*source)
    {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}

bool checkIfLetter(const char symbol)
{
    return ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z'));
}

void inputValuesInArray(const char* text, char* pattern, size_t startPoint, const size_t endPoint)
{
    unsigned counter = 0;
    while (startPoint < endPoint)
    {
        if (checkIfLetter(text[startPoint]))
        {
            pattern[counter] = text[startPoint];
            counter++;
        }
        
        startPoint++;
    }
    pattern[counter] = '\0';
    return;
}

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

void findTheSmallestLexicographicalWord(const char* text)
{
    if (!text)
    {
        return;
    }

    char smallestWord[45] = ""; //using this sign because it h
    unsigned textLength = myStrlen(text);
    unsigned startPoint = 0;
    bool firstWord = true;

    inputValuesInArray(text, smallestWord, startPoint, textLength);
    for (size_t i = 0; i <= textLength; i++)
    {
        if (text[i] == ' ' || text[i] == '\0')
        {
            char word[45]; //according to google the longest english word has 45 symbols
            inputValuesInArray(text, word, startPoint, i);
            
            if (isCurrentSmallestWordBiggerThanCurrentWord(word, smallestWord))
            {
                myStrcpy(smallestWord, word);
            }
            
            startPoint = i + 1;
        }
    }

    cout << smallestWord;
}

int main()
{
    char text[] = "Me? Why always me?";
    
    findTheSmallestLexicographicalWord(text);
}

