// Sem.08_Ex6_InputAValueToBit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Input a certain value to a bit of a number
unsigned increaseBit(unsigned number, unsigned position)
{
    unsigned mask = 1;
    mask <<= position;
    return (mask ^ number);
}
int main()
{
	unsigned number;
	cout << "Input a number: ";
	cin >> number;

	unsigned position;
	cout << "Input a position: ";
	cin >> position;

	cout << increaseBit(number, position);
}

