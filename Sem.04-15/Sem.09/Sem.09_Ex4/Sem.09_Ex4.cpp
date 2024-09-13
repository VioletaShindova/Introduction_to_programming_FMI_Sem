// Sem.09_Ex4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функция, която приема матрица NxN и връща обратната матрица (ако дадената е обратима). 
//Ако матрицата не е обратима, да се отпечата подходящо съобщение

constexpr size_t N = 3;
constexpr size_t detN = N + N - 1;

bool checkIfReversable(int matrix[][N])
{
	int detMatrix[N][detN] = { {2,1,2}, {3,4,3} };
	int result = 0;
	for (size_t i = 0; i < N; i++)
	{
		for (size_t j = 0; j < detN - 1; j++)
		{
			result += detMatrix[][]
		}
	}
}

int main()
{
	int matrix[N][N] = { {2,1},{3,4	} };
	if (checkIfReversable(matrix))
	{
		
	}
	else
	{
		cout << "The matrix is not reversable!";
	}
}

