// LinearSearchInArray_Ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isPrefixRec(const char* text, const char* pattern)
{
    if (!*pattern)
    {
        return true;
    }

    return (((*pattern) == (*text)) && isPrefixRec(text + 1, pattern + 1));
}

bool findInTextRec(const char* text, unsigned textLength, const char* pattern, unsigned patternLegnth)
{
    if (patternLegnth > textLength)
    {
        return false;
    }

    return (isPrefixRec(text, pattern) || findInTextRec(text + 1, textLength - 1, pattern, patternLegnth));
}

bool findInText(const char* text, const char* pattern)
{
    return findInTextRec(text, strlen(text), pattern, strlen(pattern));
}

int main()
{   
    cout << findInText("abcba", "cb");

    return 0;

}