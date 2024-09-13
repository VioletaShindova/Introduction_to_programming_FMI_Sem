// Sem.04_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете функция, която приема неотрицателно число n и връща числото обърнато - 
//2800 - 0082

void printNewNumber(unsigned number, const unsigned& newNumber)
{
	if (number % 10 == 0)
	{
		while (number % 10 == 0)
		{
			cout << "0";
			number /= 10;
		}
		cout << newNumber;
	}
	else
	{
		cout << newNumber;

	}
}

unsigned convertNewNumber(unsigned number)
{
	unsigned newNumber = 0;
	while (number != 0)
	{
		((newNumber *= 10) += (number % 10));
		number /= 10;
	}

	return newNumber;
}

int main()
{
    int number = 0;
	do
	{
		cout << "Input a positive number: ";
		cin >> number;

	} while (number <=0 );


	unsigned newNumber = convertNewNumber(number);

	printNewNumber(number, newNumber);
}
