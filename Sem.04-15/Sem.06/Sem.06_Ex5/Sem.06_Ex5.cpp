// Sem.06_Ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Въвежда се число N(N <= 1000) и N цели числа(елементи на масив).Да се отпечатат броя на инверсиите в масива.

//Инверсия ще наричаме двойка индекси(i, j), където i < j и arr[i] > arr[j]

//Вход: 6 5 4 3 2 1 0 Изход : 15 //в масива [5 4 3 2 1 0] има 15 инверсии.

//Вход : 5 10 11 12 13 14 15, Изход : 0

void countInversions(const unsigned& number, const unsigned array[], const size_t& length, unsigned& counterInversions)
{
	for (size_t i = 0; i < length; i++)
	{
		if (number > array[i]) 
		{
			counterInversions++;
		}
	}
}

int main()
{
    constexpr size_t length = 6;
    unsigned array[] = { 5, 10, 11, 12, 13, 14, 15 };
	bool result = true;

	unsigned counterInversions = 0;

	for (size_t i = 0; i < length; i++)
	{
		countInversions(array[i], array + i + 1, length, counterInversions);
	}
	
	cout << counterInversions;
}

