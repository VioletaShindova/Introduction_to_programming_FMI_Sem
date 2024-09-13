// Sem.12_Ex1.2_MyVersion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void print(unsigned** matrix, const unsigned rows)
{
	for (size_t i = 0; i < rows; i++)
	{
		unsigned sizeOfRow = matrix[i][0]; //the count of colls
		for (size_t j = 2; j < sizeOfRow + 2; j++)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
}

void swap(unsigned*& firstElement, unsigned*& secondElement)
{
	unsigned* temp = firstElement;
	firstElement = secondElement;
	secondElement = temp;
}

void moveTheRowToTheCorretRow(unsigned** matrix, const unsigned lastModified)
{
	unsigned current = lastModified;
	while (current > 0 && matrix[current][1] > matrix[current-1][1])
	{
		swap(matrix[current][1], matrix[current - 1][1]);
		current--;
	}
}

void addPoints(unsigned** matrix, const unsigned row, const unsigned coll, const unsigned points)
{
	matrix[row][coll + 2] += points;
	matrix[row][1] += points;

	moveTheRowToTheCorretRow(matrix, row);
}

void freeMatrix(unsigned** matrix, const unsigned rows)
{
	for (size_t i = 0; i < rows; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return;
}

unsigned** createMatrix(const unsigned rows)
{
	unsigned** matrix = new unsigned* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		unsigned colls;
		cin >> colls;

		matrix[i] = new unsigned[colls + 2] {0}; //on this particular row, create this number colls that have values 0
		matrix[i][0] = colls; //keep the value of the collumns
	}
	return matrix;
}

int main()
{
    unsigned rows; //teamsCount
    cin >> rows;

	unsigned** matrix = createMatrix(rows);

	for (size_t i = 0; i < rows; i++)
	{
		unsigned row, coll, points;
		cin >> row >> coll >> points; //which points you want to change

		addPoints(matrix, row, coll, points);
		print(matrix, rows);
	}

	print(matrix, rows);
	freeMatrix(matrix, rows);
}
