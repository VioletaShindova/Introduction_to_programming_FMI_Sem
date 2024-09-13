// Sem.09_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функция, която приема матрица NxN и транспонира матрицата

constexpr size_t COLUMNS = 3;
constexpr size_t ROWS = 2;

void transpositionValuesInMatrix(const unsigned matrix[][COLUMNS])
{
	for (size_t i = 0; i < COLUMNS; i++)
	{
		for (size_t j = 0; j < ROWS; j++)
		{
			cout << matrix[j][i] << ' ';
		}
		cout << endl;
	}
}

void outputValuesInMatrix(const unsigned matrix[][COLUMNS])
{
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLUMNS; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
}

void inputValuesInMatrix(unsigned matrix[][COLUMNS])
{
	cout << "Input values: " << endl;
	for (size_t i = 0; i < ROWS; i++)
	{
		for (size_t j = 0; j < COLUMNS; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

int main()
{
    unsigned matrix[ROWS][COLUMNS];
	inputValuesInMatrix(matrix);
	cout << endl;
	outputValuesInMatrix(matrix);
	cout << endl;
	transpositionValuesInMatrix(matrix);
}
