// Sem.04_Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

//Напишете функция, която приема неотрицателно число и връща дали числото е палиндром. 
//12321 - yes

unsigned reverse(unsigned number)
{
	unsigned newNumber = 0;

	while (number != 0)
	{
		((newNumber *= 10) += (number % 10));
		number /= 10;
	}

	return newNumber;
}

bool isPalindrome(const unsigned& number)
{
	return (number == reverse(number));
}

int main()
{
	int number = 0;
	do
	{
		cout << "Input a positive number: ";
		cin >> number;

	} while (number <= 0);

	if (isPalindrome(number))
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}
	
}


