// Quadrants_Ex0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void checkQuadrant(int x, int y)
{
	if (x > 0)
	{
		if (y > 0) 
		{
			cout << "First quadrant!";
		}
		else if (y < 0)
		{
			cout << "Fourth quadrant!";
		}
		else
		{
			cout << "It is on the positive side of the abscissa axis";
		}
	}
	else
	{
		if (y > 0)
		{
			cout << "Second quadrant!";
		}
		else if (y < 0)
		{
			cout << "Third quadrant!";
		}
		else
		{
			cout << "It is on the negative side of the abscissa axis";
		}
	}
}

int main()
{
	int x, y;

	cout << "Input x: ";
	cin >> x;
	
	cout << "Input y: ";
	cin >> y;

	checkQuadrant(x, y);
}