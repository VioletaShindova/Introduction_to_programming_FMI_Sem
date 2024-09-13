// Sem.10_Ex3_Search_In_Text.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//search in text

unsigned myStrLen(const char* text)
{
    if (!text)
        return 0;

    unsigned counter = 0;
    while (*text)
    {
        counter++;
        text++;
    }
    return counter;
}

bool checkSymbols(const char* text, const char* pattern, const unsigned& patternLength)
{
    bool result = true;
    for (size_t i = 0; i < patternLength; i++)
    {
        if (*text == pattern[i])
        {
            text++;
        }
        else
        {
            result = false;
            break;
        }
    }
    return result;
}

bool checkNextSymbol(const char* text)
{
    return (*text <= 'A' || (*text >= 'Z' && *text <= 'a') || *text >= 'z');
}

bool searchInText(const char* text, const char* pattern)
{
    if (!text || !pattern)
    {
        return false;
    }

    bool result = false;
    while (*text)
    {
        if (*text == *pattern)
        {
            unsigned patternLength = myStrLen(pattern);
            if (checkSymbols(text, pattern, patternLength) && checkNextSymbol(text + patternLength))
            {
                result = true;
                break;
            }
        }

        text++;
    }
    return result;
}

int main()
{
    char string[] = "hello guys!";
    char pattern[] = "guys";
    cout << "Check if the word " << pattern << " is found in " << string << endl;

    if (searchInText(string, pattern))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}

