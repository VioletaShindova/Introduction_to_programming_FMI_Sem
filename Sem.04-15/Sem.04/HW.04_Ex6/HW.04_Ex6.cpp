// HW.04_Ex6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Да се напише функция, която приема три естествени числа a и b и k и връща броя на числата в интервата[a...b], 
//които имат точно k различни прости делитела.

//Вход: 19 32 3, Изход : 1

//Вход : 19 42 3, Изход : 2

bool checkForDivisors(unsigned number, unsigned numberDivisors)
{
	unsigned counter = 1;
	for (size_t i = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			counter++;
		}

		if (counter > numberDivisors)
		{
			return false;
		}
	}
	return (counter == numberDivisors);
}

unsigned countNumbersInInterval(unsigned leftBorder, unsigned rightBorder, unsigned number)
{
	unsigned numbersDivisorCounter = 0;
	
	for (size_t i = leftBorder; i <= rightBorder; i++)
	{
		if (checkForDivisors(i, number))
		{
			numbersDivisorCounter++;
		}
	}
	return numbersDivisorCounter;
}

int main()
{
	unsigned leftBorder;
	cout << "Input first number: ";
	cin >> leftBorder;

	unsigned rightBorder;
	cout << "Input second number: ";
	cin >> rightBorder;

	unsigned thirdNumber;
	cout << "Input third number: ";
	cin >> thirdNumber;

	cout << countNumbersInInterval(leftBorder, rightBorder, thirdNumber);
}
