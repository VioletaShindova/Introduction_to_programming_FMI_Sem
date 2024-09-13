// Sem.12_Ex1_PlayerStatistics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете програма за следенето на резултатите на отбори. 
//Всеки играч има точки и всеки отбор може да има различен брой играчи. 
//Имате възможност за добавяне на точки на играч (по индекс на отбор и играч).
//След всяка актуализация да се отпечатват точките на играчите от всеки отбор, 
//като отборите са сортирани по сумата на точките на играчите си.

//> 3
//> 2 4 3
//0 0
//0 0 0 0
//0 0 0
//> 1 2 10
//0 0 10 0
//0 0
//0 0 0
//> 2 0 3
//0 0 10 0
//3 0 0
//0 0
//> 2 1 10
//3 10 0
//0 0 10 0
//0 0

void moveTheRowToTheCorrectPosition(int** matrix, int lastModifiedRow)
{
	int current = lastModifiedRow;
	while (current > 0 && matrix[current][1] > matrix[current - 1][1])
	{
		swap(matrix[current], matrix[current - 1]);
		current--;
	}
}

void addPoints(int** mtx, unsigned row, unsigned coll, unsigned points)
{
	mtx[row][coll + 2] += points;
	mtx[row][coll + 1] += points;
	moveTheRowToTheCorrectPosition(mtx, row);
}

void swap(int*& firstElement, int*& secondElement)
{
	int* temp = firstElement;
	firstElement = secondElement;
	secondElement = temp;
}

void freeMatrix(int** mtx, const unsigned rows)
{
	for (size_t i = 0; i < rows; i++)
	{
		delete[] mtx[i];
	}
	delete[] mtx;
	return;
}

void print(int** mtx, const unsigned rows)
{
	for (size_t i = 0; i < rows; i++)
	{
		unsigned sizeOfRow = mtx[i][0];

		//want to skip the first two colls because 
		//mtx[i][0] has the count of colls of the current row.
		//mtx[i][1] has the sum of the points of the current row.
		for (size_t j = 2; j < sizeOfRow + 2; j++) 
		{
			cout << mtx[i][j] << ' ';
		}
		cout << endl;
	}
}

int** createMatrix(const unsigned rows)
{
	int** mtx = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		unsigned colls;
		cin >> colls;

		mtx[i] = new int[colls + 2] {0};
		mtx[i][0] = colls;
	}
	return mtx;
}


int main()
{
	unsigned rows;
	cin >> rows;

	int** matrix = createMatrix(rows);
	print(matrix, rows);

	unsigned queriesCount;
	cin >> queriesCount;

	for (unsigned i = 0; i < queriesCount; i++)
	{
		unsigned row, coll, points;
		cin >> row >> coll >> points;
		addPoints(matrix, row, coll, points);
		print(matrix, rows);
	}

	print(matrix, rows);
	freeMatrix(matrix, rows);
}

