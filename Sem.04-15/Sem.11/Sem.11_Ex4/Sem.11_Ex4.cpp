// Sem.11_Ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Да се напише функция, която приема стринг и връща нов стринг с точна големина, 
//който е съставен от малките латински букви на подадения, но в сортиран вид.
//more work
bool isLowerLetter(const char symbol)
{
    return (symbol >= 'a' && symbol <= 'z');
}

void fillAndSortArray(char& symbol, char*& ptr, unsigned index)
{
    if (!ptr)
    {
        return;
    }

    unsigned tempIndex = 0;
    while (*(ptr-index-1))
    {
        if (ptr[tempIndex] > ptr[tempIndex + 1])
        {
            char temp = ptr[tempIndex];
            ptr[tempIndex] = ptr[tempIndex + 1];
            ptr[tempIndex + 1] = temp;
        }
        ptr++;
    }

    return;
}

unsigned getCountOfLowerLetters(const char* text)
{
    if (!text)
    {
        return 0;
    }

    unsigned lettersCounter = 0;
    while (*(text-1))
    {
        if(isLowerLetter(*text))
        {
            lettersCounter++;
        }
        text++;
    }

    return lettersCounter;
}

char* getLowerLetterString(char* text, char* ptr)
{
    if (!text)
    {
        return nullptr;
    }

    const size_t newSize = getCountOfLowerLetters(text);
    ptr = new char[newSize + 1]; //because of '\0'
    unsigned currentTextIndex = 0;

    while (*text)
    {
        if (isLowerLetter(*text))
        {
            ptr[currentTextIndex++] = *text;
        }
        text++;
    }
    ptr[currentTextIndex] = '\0';
    return ptr;
}

void print(const char* ptr)
{
    if (!ptr)
    {
        return;
    }

    while (*ptr)
    {
        cout << *ptr << ' ';
        ptr++;
    }
    return;
}

void sortLowerLetters(char*& ptr)
{
    if (!ptr)
    {
        return;
    }
    char* temp = ptr;
    while (*temp)
    {
        fillAndSortArray(*temp, ptr);
        temp++;
    }
    return;
}

int main()
{
    char text[] = "82fuqhfHWhf9";
    char* ptr = nullptr;
    ptr = getLowerLetterString(text, ptr);

    sortLowerLetters(ptr);

    print(ptr);

    return 0;
}

