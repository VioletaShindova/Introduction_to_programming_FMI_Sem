// DynamicMemory_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
		if ((*str >= '0' && *str <= '9') && ((*(str + 1) >= 'a' && *(str + 1) >= 'z') || 
			(*(str + 1) >= 'A' && *(str + 1) >= 'Z') || (*(str + 1) == '\0')))
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

char* censoreNumbers(const char* str)
{
	if (!str)
	{
		return nullptr;
	}

	size_t resultSize = myStrlen(str) - getDigitsCount(str) + getNumbersCount(str);
}

int main()
{
	char* string = censoreNumbers("abc1234dgg4fsdg5");
}

