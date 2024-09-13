// Sem.10_Ex1_ImplementationsOfFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool myStrcmp(const char* first, const char* second)
{
    if (!first || !second)
    {
        return 0;
    }

    while ((*first) && (*second) && (*first) == (*second))
    {
        first++;
        second++;
    }
    return (*first - *second);
}

void myStrCpy(const char* source, char* destination)
{
    if (!source || !destination)
    {
        return;
    }

    while (*source)
    {
        *(destination) = *(source);
        source++;
        destination++;
    }
    *destination = '\0';
}

unsigned myStrlen(char* text)
{
    if (!text)
    {
        return 0;
    }

    unsigned counter = 0;
    while (*text) //same as (*text) != '\0'
    {
        counter++;
        text++;
    }
    return counter;
}

int myAtoi(const char* stringArray)
{
    if (!stringArray)
    {
        return -1;
    }

    int newNumber = 0;
    while (*stringArray) //*stringArray != '\0'
    {
        (newNumber *= 10) += ((*stringArray) - '0');
        stringArray++;
    }
    
    return newNumber;
}

void myStrcat(char* first, const char* second)
{
    if (!first || !second)
    {
        return;
    }

    size_t firstLen = myStrlen(first);
    first += firstLen;
    myStrCpy(second, first);
}

int main()
{
    char text[] = "test";
    /*char text2[10];

    cout << "Length of the string is: " << myStrlen(text);

    char* destination = text2;

    myStrCpy(text, text2);
    cout << endl << destination;

    myStrcat(text, text2);*/

   /* if (myStrcmp(text, "text"))
    {
        cout << "They are the same!";
    }
    else
    {
        cout << "They are NOT the same!";
    }*/

    cout << myAtoi("10315262");
}

