// Functions_For_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//searching in an already sorted array and returns the position of the element
int findElementInSortedArr(const int array[], const int size, const int element)
{
	int leftBorder = 0;
	int rightBorder = size - 1;
	
	while (leftBorder <= rightBorder) 
	{
		int mid = leftBorder + (rightBorder - leftBorder) / 2;

		if (element > array[mid])
		{
			leftBorder = mid + 1;
		}
		else if (element < array[mid])
		{
			rightBorder = mid - 1;
		}
		else
		{
			return mid;
		}
	}

	return -1;
}

//searching for an element in the array
short int findElement(const int array[], const int size, const int element)
{
	int result = 0;
	for (unsigned i = 0; i < size; i++)
	{
		if (array[i] == element)
		{
			result = 1;
		}
	}

	return result;
}

//Displaying the array on the console
void outputArray(const int array[], const int size)
{
	for (unsigned i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
}

//Filling array with elements
void fillingArray(int array[], const int size)
{
	for (unsigned i = 0; i < size; i++)
	{
		cin >> array[i];
	}
}

int main()
{
    constexpr unsigned int sizeArray = 64;
    int array[sizeArray];

	int size = 0;
	do 
	{
		cout << "Input size of the array: ";
		cin >> size;
	} while (size <= 0);

	fillingArray(array, size);
	//outputArray(array, size);

	//cout << endl;

	int element = 0;
	cout << "Input element for a search: ";
	cin >> element;
	//const short int result = findElement(array, size, element);
	//cout << result;

	const int positionOfElement = findElementInSortedArr(array, size, element);
	cout << "The position of the element is: " << positionOfElement;
}
