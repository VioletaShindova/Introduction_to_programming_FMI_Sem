// Apples_Ex8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int** createMatrix(int rows)
{
	int** mtx = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		int colls;
		cin >> colls;

		mtx[i] = new int[colls + 2] {0};
		mtx[i][0] = colls;
	}
	return mtx;
}


void print(int** mtx, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		int sizeOfRow = mtx[i][0];
		for (int j = 2; j < sizeOfRow + 2; j++)
			cout << mtx[i][j] << ' ';
		cout << endl;
	}
}

void freeMatrix(int** matrix, int rows)
{
	for (int i = 0; i < rows; i++)
		delete[] matrix[i];
	delete[] matrix;
}
	
int main()
{
	int rows;
	cin >> rows;

	int** mtx = createMatrix(rows);

	print(mtx, rows);

	freeMatrix(mtx, rows);
}
