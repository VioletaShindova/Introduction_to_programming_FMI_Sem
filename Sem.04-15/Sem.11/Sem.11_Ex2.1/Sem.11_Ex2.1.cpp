// Sem.11_Ex2.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Да се напише функция, която приема стринг и връща два стринга с ТОЧНА големина. 
//Първият да бъде съставен само от малките букви, а другият да бъде съставен само от главните букви.

bool isLower(char ch)
{
    return ch >= 'a' && ch <= 'z';
}
bool isUpper(char ch)
{
    return ch >= 'A' && ch <= 'Z';
}

void getCountOfUpper(const char* str, size_t& counterUpper, size_t& counterLower)
{
    if (!str)
    {
        return;
    }

    while (*str)
    {
        if (isLower(*str))
        {
            counterLower++;
        }
        else if (isUpper(*str))
        {
            counterUpper++;
        }
        str++;
    }
    return;
}

void getLowerAndUpperStrings(const char* str, char*& ptrLowerLetters, char*& ptrUpperLetters)
{
    if (!str)
    {
        return;
    }

    size_t counterUpper = 0;
    size_t counterLower = 0;

    getCountOfUpper(str, counterLower, counterUpper);

    ptrLowerLetters = new char[counterLower + 1];
    ptrUpperLetters = new char[counterUpper + 1];

    unsigned currentLowerIndex = 0;
    unsigned currentUpperIndex = 0;

    while (*str)
    {
        if (isLower(*str))
        {
            ptrLowerLetters[currentLowerIndex] = *str;
            currentLowerIndex++;
        }
        else if (isUpper(*str))
        {
            ptrUpperLetters[currentUpperIndex] = *str;
            currentUpperIndex++;
        }
        str++;
    }

    ptrLowerLetters[currentLowerIndex] = '\0';
    ptrUpperLetters[currentUpperIndex] = '\0';
}

int main()
{
    char str[] = "AAqew12423BBq";
    char* ptrLowerLetters = nullptr;
    char* ptrUpperLetters = nullptr;

    getLowerAndUpperStrings(str, ptrLowerLetters, ptrUpperLetters);

    cout << ptrLowerLetters << endl;
    cout << ptrUpperLetters;

    delete[] ptrLowerLetters;
    delete[] ptrUpperLetters;
}
