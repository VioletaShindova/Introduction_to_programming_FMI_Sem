// Basic_String_Functions_Implementation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int convertCharToDigit(char ch)
{
    if (ch >= '0' && ch <= '9')
        return ch - '0'; //VERY GOOD
    return -1;
}

int convertStrToUnsigned(char* str)
{
    if (!str)
    {
        return 0;
    }

    if (*str == '0')
    {
        str++;
    }
    int result = 0;
    while (*str != '\0')
    {
        unsigned digit = convertCharToDigit(*str);
        (result *= 10) += digit;
        str++;
    }
    return result;
}

int convertStrToSigned(char* str)
{
    if (!str)
        return 0;

    if (*str == '-')
        return -1 * convertStrToUnsigned(str + 1);
    else
        return convertStrToUnsigned(str);
}

int myStrcmp(const char* first, const char* second)
{
    if (!first || !second)
        return 0; //some error value

    //we skip the common prefix, but not the terminating zero!
    while ((*first) && (*second) && ((*first) == (*second))) //acutally the (*second) check can be missed here.
    {
        first++;
        second++;
    }

    return (*first - *second);

}

//copy str to dest
void myStrcpy(const char* str, char* dest)
{
    if (!str || !dest)
    {
        return;
    }

    while (*str)
    {
        *dest = *str;
        str++;
        dest++;
    }
    *dest = '\0';
}

unsigned myStrlen(const char* str)
{
    if (!str)
    {
        return 0;
    }
    unsigned counter = 0;
    while (*str != '\0')
    {
        counter++;
        str++;
    }
    return counter;
}   
void myStrcat(char* first, const char* second)
{
    if (!first || !second)
        return;

    size_t firstLen = myStrlen(first);
    first += firstLen;
    myStrcpy(second, first);
}

int main()
{
    char str[20] = "1234";
    char str2[] = "ABCY";
   
    //int result = myStrcmp(str, str2);
    //cout << result;
    //myStrcat(str, str2);
    //cout << str; //Printing the whole text

    int number = convertStrToSigned(str);
    cout << number;
}