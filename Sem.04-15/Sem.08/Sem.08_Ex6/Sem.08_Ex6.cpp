// Sem.08_Ex6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функция, която приема масив(разглеждаме го като множество) и отпечатва всички негови подмножества, като използвате
//побитови операции

//Вход: [1, 2, 3] , Изход : [] , [1], [2], [3], [1, 2], [2, 3], [1, 3], [1, 2, 3]

//Вход : [5, 3] Изход : [] , [5], [3], [5, 3]

constexpr size_t SIZE_ARR = 5;

void printSubset(const unsigned array[], size_t SIZE_ARR, unsigned mask)
{
	cout << "{ ";
	for (int i = SIZE_ARR - 1; i >= 0 ; i--)
	{
		if (mask % 2 != 0)
		{
			cout << array[i] << ' ';
		}
		mask /= 2;
	}
	cout << "}, ";

}

unsigned powerOfTwo(size_t SIZE_ARR)
{
	return 1 << SIZE_ARR;
}

void generateSubsets(const unsigned array[])
{
	//size <= 32
	unsigned pt = powerOfTwo(SIZE_ARR);
	for (size_t i = 0; i < pt; i++)
	{
		printSubset(array, SIZE_ARR, i);
	}
}

int main()
{
    unsigned array[] = { 1,2,3,4,5 };

	generateSubsets(array);
}

