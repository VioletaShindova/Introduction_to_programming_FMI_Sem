// Replacing_InText.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void updatingLengthOfText(unsigned& strLength, unsigned& wordLength, unsigned& newWordLength, const unsigned &counter)
{
    if (wordLength < newWordLength)
    {
        strLength = ((newWordLength - wordLength) * counter);
    }
    else if (wordLength > newWordLength)
    {
        strLength = ((wordLength - newWordLength) * counter);
    }
    return;
}

bool counterWords(char* str, char* word, unsigned wordLength)
{
    while ((*str) == (*word))
    {
        str++;
        word++;
        wordLength--;
        if (!wordLength)
        {
            return true;
        }
    }
}

void myStrcmp(char* str,unsigned strLength, char* word, char* newWord)
{
    if (!str || !word)
    {
        return;
    }

    while ((*str) == (*word))
    {
        *str = *newWord;
        str++;
        newWord++;
        strLength--;
    }
    *str = ' ';
}

unsigned countingWordInText(char* str,unsigned strLength, char* word, unsigned &wordLength, char* newWord) //unsigned &strLength,
{
    if (!str || !word)
    {
        return 0;
    }

    unsigned counter = 0;
    while (*str != *word)
    {
        /*if (counterWords(str, word, wordLength))
        {
            counter++;
        }*/
        str++;

    }

    myStrcmp(str, strLength, word, newWord);
    
}

unsigned myStrlen(char* str)
{
    if (!str)
    {
        return 0;
    }

    unsigned counter = 0;
    while (*str)
    {
        counter++;
        str++;
    }
    return counter;
}

void replacingWords(char* str, char* word, char* newWord)
{
    unsigned strLength = myStrlen(str);
    unsigned wordLength = myStrlen(word);
    unsigned newWordLength = myStrlen(newWord);

    const unsigned counterWord = countingWordInText(str, word, wordLength);

    updatingLengthOfText(strLength, wordLength, newWordLength, counterWord);
}

int main()
{
    char str[] = "I am the best of the best";
    char word[] = "best";
    char newWord[] = "worst";

    replacingWords(str, word, newWord);
}

