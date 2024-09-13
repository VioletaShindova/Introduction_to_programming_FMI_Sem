// Sem.08_Ex5_ReturnABit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Return the value the bit of a number

unsigned getValueOfBit(unsigned int number, unsigned int position)
{
	unsigned mask = 1;
	mask <<= position;
	return ((number & mask) >> position);
}

//another way 
bool checkBit(unsigned int n, unsigned ind)
{
	unsigned int mask = 1;
	mask <<= ind;
	return (mask & n) == mask;
}

int main()
{
	unsigned number;
	cout << "Input a number: ";
	cin >> number;

	unsigned position;
	cout << "Input a position: ";
	cin >> position;

	cout << getValueOfBit(number, position);
}