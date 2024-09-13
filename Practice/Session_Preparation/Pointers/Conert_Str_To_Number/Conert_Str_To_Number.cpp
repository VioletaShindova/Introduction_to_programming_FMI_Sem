// Conert_Str_To_Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int convertCharToDigit(const char ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return (ch -'0');
	}
	else
	{
		return -1;
	}
}

int convertToUnsigned(char* str)
{
	if (!str)
	{
		return 0;
	}

	unsigned result = 0;
	while (*str != '\0')
	{
		int digit = convertCharToDigit(*str);
		(result *= 10) += digit;
		str++;
	}
	return result;
}

int convertToSigned(char* str)
{
	if (!str)
	{
		return 0;
	}
	
	if (*str == '-')
	{
		return ((-1) * convertToUnsigned(str + 1));
	}
	else
	{
		return convertToUnsigned(str);
	}
}

int main()
{
	char str[] = "-2345";
	int number = convertToSigned(str);
	cout << number;
}