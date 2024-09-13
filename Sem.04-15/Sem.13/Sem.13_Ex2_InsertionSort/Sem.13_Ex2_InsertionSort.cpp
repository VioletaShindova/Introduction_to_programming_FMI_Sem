// Sem.13_Ex2_InsertionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Implementation of an insertion sort

void printArray(unsigned* array, const size_t SIZE)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << array[i] << ' ';
	}
	return;
}

void insertionSort(unsigned* array, const size_t size)
{
	for (size_t i = 1; i < size; i++)
	{
		int currentIndex = i - 1;
		unsigned currentElement = array[i];
		while (currentIndex >= 0 && array[currentIndex] > currentElement)
		{
			array[currentIndex + 1] = array[currentIndex];
			currentIndex--;
		}
		array[currentIndex + 1] = currentElement;
	}
}

int main()
{
	constexpr size_t SIZE = 5;
	unsigned array[SIZE] = { 1,4,5,2,3 };

	insertionSort(array, SIZE);
	printArray(array, SIZE);
}
