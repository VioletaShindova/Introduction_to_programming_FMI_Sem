// FindCountOfNums&Symbols_Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printCountOfLettersAndDigits(const char array[])
{
	unsigned letterCounter = 0;
	unsigned digitCounter = 0;
	for (int i = 0; array[i] != '\0'; i++)
	{
		if (array[i] >= 'A' && array[i] <= 'Z' ||
			array[i] >= 'a' && array[i] <= 'z')
		{
			letterCounter++;
		}
		else if (array[i] >= '0' && array[i] <= '9')
		{
			digitCounter++;
		}
		else
		{
			cout << array[i] << " is not a letter, nor a digit";
		}
	}

	cout << "Letters: " << letterCounter << endl;
	cout << "Digits: " << digitCounter;

	return;
}

int main()
{
	char array[]{ "sadfegsuiewhui" };
	printCountOfLettersAndDigits(array);
}