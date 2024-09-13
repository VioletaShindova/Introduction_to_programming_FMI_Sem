// isPalidrome_Ex7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



void inputArray(int* array, int length)
{
	cout << "Input values of the array: ";

	for (size_t i = 0; i < length; i++)
	{
		cin >> array[i];
	}

	return;
}

int main()
{
	int number = 0;
	
	do
	{
	    cout << "Input number: ";
	    cin >> number;
	} while (number < 0 || number > 20);

	int* array = new int[number];

	inputArray(array, number);

	
}


//void inputYears(unsigned year, const int numberOfTimes)
//{
//    if (numberOfTimes == 0)
//    {
//        return;
//    }
//
//    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//    {
//        cout << year << " ";
//        inputYears(year + 4, numberOfTimes - 1);
//    }
//    else
//    {
//        inputYears(year + 1, numberOfTimes);
//    }
//}
//
//int main()
//{
//    unsigned year = 0;
//    
//    do
//    {
//        cout << "Input year: ";
//        cin >> year;
//    } while (year >= 3000);
//
//    int numberOfTimes = 0;
//
//    do
//    {
//        cout << "Number of output years: ";
//        cin >> numberOfTimes;
//    } while (numberOfTimes < 0);
//
//    inputYears(year, numberOfTimes);
//}
