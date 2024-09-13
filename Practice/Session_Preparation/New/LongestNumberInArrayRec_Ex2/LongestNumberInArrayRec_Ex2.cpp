// LongestNumberInArrayRec_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете рекурсия която при подаване на символен низ изкарва дължината на най дългото число в него:

//Тоест при abc12abv123 ще изкара 3

void swapValues(unsigned& firstValue, unsigned& secondValue)
{
	unsigned temp = firstValue;
	firstValue = secondValue;
	secondValue = temp;
}

void checkArray(char* array, const size_t length, unsigned& counter, unsigned& resultCounter)
{ 
	if (!(*array))
	{
		if (resultCounter < counter)
		{
			swapValues(resultCounter, counter);
			counter = 0;
		}
		return;
	}

	if ((*array) >= '0' && (*array) <= '9')
	{
		counter++;
	}
	else
	{
		if (resultCounter < counter)
		{
			swapValues(resultCounter, counter);
			counter = 0;
		}
	}

	return checkArray(array + 1, length - 1, counter, resultCounter);
}

unsigned myStrlen(char* array)
{
	if (!array)
	{
		return 0;
	}

	unsigned counter = 0;

	while (*array)
	{
		counter++;
		array++;
	}
	return counter;
}

int main()
{
	char array[] = "abc12abv123";
	unsigned counter = 0;
	unsigned resultCounter = 0;

	checkArray(array, myStrlen(array), counter, resultCounter);

	cout << resultCounter;
}
