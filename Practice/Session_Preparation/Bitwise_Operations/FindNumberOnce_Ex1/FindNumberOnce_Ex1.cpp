// FindNumberOnce_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int findNumber(int array[], const size_t length)
{
	for (unsigned i = 0; i < length; i++)
	{
		if (array[i] != -1) 
		{
			return array[i];
		}
	}
}

bool checkBits(const int firstNumber, const int secondNumber)
{
	return (firstNumber & secondNumber);
}

bool checkInArray(const int firstNumber, const unsigned index, int* array, const size_t length)
{

	for (unsigned i = index; i < length; i++)
	{
		if (checkBits(firstNumber, array[i]))
		{
			array[i] = -1;
			return true;
		}
	}
	
}

void scratchNumber(int array[], const size_t length)
{	
	//{9, 18, 9, 12, 18, 15, 12};
	for (unsigned i = 0, unsigned j = 1; i < length; i++)
	{
		if (j == length)
		{
			cout << "There is not a single number!";
			return;
		}

		if (checkInArray(array[i], j, array, length))
		{
			array[i] = -1;
			j++;
		}
	}
	return;
}

int main()
{
    int array[7] = {9, 18, 9, 12, 18, 15, 12};
	scratchNumber(array, 7);
	cout << findNumber(array, 7);
}

