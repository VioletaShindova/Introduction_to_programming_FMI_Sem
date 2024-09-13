// Is_Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isPalinromeRec(const char* str, unsigned length)
{
    if (length <= 1)
    {
        return true;
    }

    return str[0] == str[length - 1] && isPalinromeRec(str + 1, length - 2);
}

unsigned myStrlen(const char* str)
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

bool isPalindrome(const char* str)
{
    return isPalinromeRec(str, myStrlen(str));
}

int main()
{
    char str[] = "abcba";
    cout << isPalindrome(str);
}
