// Sem.09_Ex3_MultiplyMatrixes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функция, която приема матрица NxM и матрица MxK и умножава първата матрица по втората.

constexpr size_t ROWS = 2;
constexpr size_t COLUMNS = 3;
constexpr size_t NEW_COLUMNS = 2;

void printNewMatrix(const int newMatrix[][NEW_COLUMNS])
{
	cout << '(';
	for (size_t i = 0; i < NEW_COLUMNS; i++)
	{
		for (size_t j = 0; j < NEW_COLUMNS; j++)
		{
			if (j == NEW_COLUMNS - 1)
			{
				cout << newMatrix[i][j];
				break;
			}
			cout << newMatrix[i][j] << " ";
		}
		cout << ')';
		if (i == NEW_COLUMNS - 1)
		{
			return;
		}
		cout << endl;
		cout << '(';
	}
	cout << ')';
}

int multiplyIndexes(int widerMatrix[ROWS][COLUMNS], int longerMatrix[COLUMNS][NEW_COLUMNS], const size_t widerIndexRow, size_t widerIndexNEWColums)
{
	int result = 0;

	for (size_t k = 0; k < COLUMNS; k++)
	{
		result += widerMatrix[widerIndexRow][k] * longerMatrix[k][widerIndexNEWColums];
	}
	return result;
}

void multiplyMatrixes(int widerMatrix[][COLUMNS], int longerMatrix[][NEW_COLUMNS])
{
	int newMatrix[ROWS][NEW_COLUMNS] = {0};

	
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < NEW_COLUMNS; j++)
		{
			//newMatrix[i][j] += widerMatrix[i][k] * longerMatrix[k][j];
			newMatrix[i][j] = multiplyIndexes(widerMatrix, longerMatrix, i, j);
		}
	}

	printNewMatrix(newMatrix);
}

int main()
{
    int widerMatrix[][COLUMNS] = { {1,2,3}, {4,5,6} };
	int longerMatrix[][NEW_COLUMNS] = { {7,8}, { 9,10 }, {11,12} };
	multiplyMatrixes(widerMatrix, longerMatrix);
}
