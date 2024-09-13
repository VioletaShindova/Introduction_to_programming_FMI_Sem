// CensN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned getNumbersCount(const char* str)
{
	if (!str)
	{
		return 0;
	}

	unsigned counter = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9' && !(*(str + 1) >= '0' && *(str + 1) <= '9'))
		{
			counter++;
		}
		str++;
	}
	return counter;
}

unsigned getDigitsCount(const char* str)
{
	if (!str)
	{
		return 0;
	}

	unsigned counter = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			counter++;
		}
		
		str++;
	}
	return counter;
}

unsigned myStrLength(const char* str)
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

bool isDigit(char ch)
{
	return ch >= '0' && ch <= '9';
}

char* censoreNumbers(const char* str)
{
	if (!str)
	{
		return nullptr;
	}

	unsigned resultSize = myStrLength(str) - getDigitsCount(str) + getNumbersCount(str);

	char* newStr = new char[resultSize + 1];

	unsigned resultIndex = 0;
	while (*str)
	{
		if (!isDigit(*str))
			newStr[resultIndex++] = *str;
		else if (!isDigit(*(str + 1)))
			newStr[resultIndex++] = '*';
		str++;
	}
	newStr[resultSize] = '\0'; //Don't forget the sentinel
	return newStr;
}

int main()
{
	char* str = censoreNumbers("abc1234dgg4fsdg5");
	cout << str;
	delete[] str;//!!!!!
}   
