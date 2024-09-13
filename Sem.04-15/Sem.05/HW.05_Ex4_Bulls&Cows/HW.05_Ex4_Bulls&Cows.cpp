// HW.05_Ex4_Bulls&Cows.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const unsigned DIGIT_COUNT = 4;

unsigned countDigitOccurences(unsigned number, const unsigned& checkDigit)
{
	if (checkDigit == 0 && number == 0)
	{
		return 1;
	}

	unsigned counterOccurences = 0;
	while (number != 0)
	{
		unsigned lastDigit = number % 10;
		if (lastDigit == checkDigit)
		{
			counterOccurences++;
		}

		number /= 10;
	}
	return counterOccurences;
}

unsigned getBullsAndCowsSum(unsigned toGuess, unsigned myGuess)
{
	unsigned sum = 0;

	while (toGuess != 0)
	{
		int lastDigit = toGuess % 10;

		bool contains = countDigitOccurences(myGuess, lastDigit) == 1;

		if (contains)
		{
			sum++;
		}

		toGuess /= 10;
	}
	return sum;
}

unsigned getBulls(unsigned toGuess, unsigned myGuess)
{
	unsigned bullCounter = 0;
	while (toGuess != 0)
	{
		if (toGuess % 10 == myGuess % 10)
		{
			bullCounter++;
		}
		toGuess /= 10;
		myGuess /= 10;
	}
	return bullCounter;
}

void getBullsAndCows(unsigned toGuess, unsigned myGuess, unsigned& bulls, unsigned& cows)
{
	bulls = getBulls(toGuess, myGuess);
	cows = getBullsAndCowsSum(toGuess, myGuess) - bulls;
}

unsigned getDigitsCount(unsigned number)
{
	if (number == 0)
	{
		return 1;
	}

	unsigned counter = 0;
	do
	{
		number /= 10;
		counter++;
	} while (number != 0);
	return counter;
}


bool areAllDistinctDigits(unsigned number)
{
	for (size_t i = 0; i <= 9; i++)
	{
		if (countDigitOccurences(number, i) > 1)
		{
			return false;
		}
	}
	return true;
}

bool isValidInput(const unsigned number)
{
	return (areAllDistinctDigits(number) && (getDigitsCount(number) == DIGIT_COUNT));
}

unsigned userInput()
{
	unsigned number = 0;
	do
	{
		cout << "Input a four distinct digits number: ";
		cin >> number;
	} while (!isValidInput(number));

	return number;
}

int main()
{
    unsigned toGuess = userInput();
	cout << "Success! Try and guess it." << endl;
	unsigned bulls = 0;
	unsigned cows = 0;
	do
	{
		unsigned myGuess = userInput();
		getBullsAndCows(toGuess, myGuess, bulls, cows);
		cout << "Bulls: " << bulls << " Cows: " << cows << endl;
	} while (bulls != DIGIT_COUNT);

	cout << "Congratulations!" << endl;
}

