// Search_In_Text.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool checkValues(const char* str, const char* pattern)
{
	if ((*str) == (*pattern))
	{
		return true;
	}
	else
	{
		return false;
	}
}

unsigned myStrlen(char* str)
{
	if (!str)
	{
		return 0;
	}

	unsigned counter = 0;
	while ((*str) != '\0')
	{
		counter++;
		str++;
	}
	return counter;
}

bool searchInText(char* str, char* pattern)
{
	unsigned strLength = myStrlen(str);
	unsigned patternLength = myStrlen(pattern);
	bool result = false;

	while (patternLength <= strLength)
	{
		if (checkValues(str, pattern))
		{
			result = true;
			pattern++;
			patternLength--;
		}

		str++;
		strLength--;
	}
	return result;
}

int main()
{
    char str[] = "Hello guys!";
    char pattern[] = "guys";

	cout << searchInText(str, pattern);
}
