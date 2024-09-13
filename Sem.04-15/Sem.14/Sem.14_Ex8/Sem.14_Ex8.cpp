// Sem.14_Ex8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Да се реализира рекурсивна функция, която приема стринг и връща дали стрингът е палиндром.

bool isPalindromeRec(const char* text, const size_t size)
{
	if (size <= 1)
	{
		return true;
	}

	if (*text == text[size - 1])
	{
		return isPalindromeRec(text + 1, size - 2);
	}
	else
	{
		return false;
	}
}

int main()
{
	char text[] = "aaba";
	cout << isPalindromeRec(text, 5);
}