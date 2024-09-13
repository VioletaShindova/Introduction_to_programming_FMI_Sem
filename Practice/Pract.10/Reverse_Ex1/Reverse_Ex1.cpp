// Reverse_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap(int& num1, int& num2)
{
	int numHolder = num1;
	num1 = num2;
	num2 = numHolder;
}

void reverse(int array[], const int& length)
{
	for (int i = 0, j = length - 1; i <= j; i++, j--)
	{
		swap(array[i], array[j]);
	}
}

void print(const int array[], const int& length) //const because you don't change it
{
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
}

int main()
{
	int array[]{ 1,2,3,4,5 };
	reverse(array, 5);
	print(array, 5);
}

