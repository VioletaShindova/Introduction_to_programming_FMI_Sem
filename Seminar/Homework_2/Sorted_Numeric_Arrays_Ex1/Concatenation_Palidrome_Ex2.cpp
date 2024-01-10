// Concatenation_Palidrome_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printArray(const char array[], const size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << array[i];
	}
}

bool checkIfPalindrome(const char array[], const size_t size)
{
	bool result = true;
	const unsigned halfSize = size / 2 - 1; //I got help with this
	for (size_t i = 0; i < halfSize; i++)
	{
		if (array[i] != array[size - i - 2])
		{
			result = false;
			break;
		}
	}

	return result;
}


void reverseValues(char array[], const size_t size)
{
	bool result = false;
	const unsigned halfSize = size / 2;

	for (size_t i = halfSize; i < size; i++)
	{
		char temp = array[i]; //o
		char holePosition = i; //4
		unsigned counter = 1;
		while (holePosition > halfSize - counter) //&& array[holePosition - 1] > temp
		{
			array[holePosition] = array[holePosition - 1]; //l
			holePosition--; //3
			array[holePosition] = temp; //o
			result = checkIfPalindrome(array, size);
			if (result)
			{
				printArray(array, size);
				return;
			}

			counter++;
			if (holePosition == halfSize - counter)
			{
				break;
			}
		}
	}

	if (!result)
	{
		cout << "It is not a palindrome";
	}
}

unsigned myStrlen(const char* str)
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

void myStrcpy(const char* source, char* dest)
{
    if (!source || !dest)
        return;
    while (*source)
    {
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0';
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
    char firstArray[] = "hello";
    char secondArray[] = "eh";

    size_t firstLength = myStrlen(firstArray);
    size_t secondLength = myStrlen(secondArray);
    size_t newLength = firstLength + secondLength + 1;

    char* newArray = new char[newLength];

    myStrcat(firstArray, newArray);
    myStrcat(newArray, secondArray);
   
    reverseValues(newArray, newLength);

}
