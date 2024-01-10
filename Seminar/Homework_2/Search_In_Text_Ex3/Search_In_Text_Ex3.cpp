#include <iostream>
using namespace std;

//unsigned myStrlen(const char* str)
//{
//	if (!str)
//		return 0;
//
//	unsigned result = 0;
//	while (*str) //is the same as (*str) != '\0'
//	{
//		result++;
//		str++;
//	}
//	return result;
//}
//
//bool isPrefix(const char* pattern, const char* text)
//{
//	unsigned counter = 0;
//	while (*text != '\0' && *pattern != '\0')
//	{
//		if (*text != *pattern)
//			return 0;
//
//		text++;
//		pattern++;
//	}
//	return *pattern == '\0';
//}

//bool searchInText(const char* text, const char* pattern)
//{
//	unsigned counter = 0; //0,1,2,3
//	size_t textLen = myStrlen(text);
//	size_t patternLen = myStrlen(pattern);
//	while (patternLen <= textLen)
//	{
//		if (*pattern >= 'a' && *pattern <= 'z' || *pattern >= 'A' && *pattern <= 'Z')
//		{
//			if(isPrefix(pattern, text))
//			{
//				continue;
//			}
//		}
//		else if (*pattern == '%')
//		{
//
//		}
//
//		switch (*pattern)
//		{
//		case '*': 
//			break;
//		case '(*pattern)' >=
//		}
//		if (isPrefix(pattern, text))
//			return true;
//		text++; //подминаваме първия символ
//		textLen--;
//	}
//	return false;
//}


//I got help with this exercise
bool checkForLetter(const char* textToCheck, const unsigned i, const unsigned j)
{
	if ((textToCheck[j] >= 'a' && textToCheck[j] <= 'z') || (textToCheck[j] >= 'A' && textToCheck[j] <= 'Z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int matchNumber(const char* textToCheck, unsigned i, unsigned j, const char* pattern, const unsigned patternLength)
{
	if (textToCheck[j] >= '0' && textToCheck[j] <= '9')
	{
		if ((textToCheck[j + 1] >= '0' && textToCheck[j + 1] <= '9') && j + 1 < patternLength && pattern[j + 1] == '%')
		{
			return 2;
		}
		return 1;
	}
	return 0;
}
bool applyPattern(const char* textToCheck, const unsigned textLength, const char* pattern, const unsigned patternLength, unsigned i)
{
	int counter = 0;
	for (size_t j = i; j < patternLength + i; j++)
	{
		if (pattern[j - i] == '*')
		{
			counter++;
		}
		else if (pattern[j - i] == '%')
		{
			int numsInSequence = matchNumber(textToCheck, i, j, pattern, patternLength);
			if (numsInSequence == 1)
			{
				counter++;
			}
			else if (numsInSequence == 2)
			{
				counter++;
				i++;
				j++;
			}
		}
		else if (pattern[j - i] == '@' && checkForLetter(textToCheck, i, j))
		{
			counter++;
		}
		else if ((pattern[j - i] >= 'a' && pattern[j - i] <= 'z') || (pattern[j - i] >= 'A' && pattern[j - i] <= 'Z'))
		{
			if (pattern[j - i] == textToCheck[j])
			{
				counter++;
			}
		}
	}
	if (counter == patternLength)
	{
		return true;
	}
	return false;
}

unsigned getLength(const char* str)
{
	if (!str)
		return 0;

	unsigned result = 0;
	while (*str) //is the same as (*str) != '\0'
	{
		result++;
		str++;
	}
	return result;
}

void checkText(const char* str, char* pattern)
{
	int validParts = 0;
	bool isValid = false;
	int textLength = getLength(str);
	int patternLength = getLength(pattern);
	for (int i = 0; i < textLength; i++)
	{
		isValid = applyPattern(str, textLength, pattern, patternLength, i);
		if (isValid)
		{
			validParts++;
		}
	}
	cout << validParts;
}

int main()
{
	char str[] = "hello guys!";
	char pattern[] = "guys";

	checkText(str, pattern);
	//cout << searchInText(str, pattern);

}
