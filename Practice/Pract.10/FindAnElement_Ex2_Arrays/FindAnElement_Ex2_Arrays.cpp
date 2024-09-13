// FindAnElement_Ex2_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int findIndex(const int array[], const int& length, const int& element)
{
	for (unsigned i = 0; i < length; i++)
	{
		if (element == array[i]) 
		{

			return i;
		}
	}

	return -1;
}

int main()
{
	int array[]{ 0, 0, 0, 1, 0 };
	int result = findIndex(array, 5, 1);
	cout << result;

}

