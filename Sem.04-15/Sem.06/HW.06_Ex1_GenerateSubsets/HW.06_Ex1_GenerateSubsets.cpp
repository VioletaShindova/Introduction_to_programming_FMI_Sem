// HW.06_Ex1_GenerateSubsets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функция, която приема масив(разглеждаме го като множество) и отпечатва всички негови подмножества.

//Вход: [1, 2, 3] , Изход : [] , [1], [2], [3], [1, 2], [2, 3], [1, 3], [1, 2, 3]

//Вход : [5, 3] Изход : [] , [5], [3], [5, 3]

constexpr size_t SIZE_ARR = 2;

void outputAllSubsets(const unsigned array[])
{
	cout << "[] , ";
	unsigned counterSubsets = 1;

	for (size_t i = 0; i < SIZE_ARR; i++)
	{
		cout << '[' << array[i] << "], ";
	}
	unsigned indexTemp = 0;
	unsigned index = 0;
	while (indexTemp != SIZE_ARR - 1)
	{
		cout << '[' << array[index] << ", " << array[counterSubsets] << "], ";

		if (counterSubsets + 1 == SIZE_ARR)
		{
			indexTemp++;
			index = indexTemp;
			counterSubsets = index + 1;
			continue;
		}
		counterSubsets++;
	}
}

int main()
{
	unsigned array[] = { 5,3 };

	outputAllSubsets(array);
}

