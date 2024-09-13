// Transponirane_Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void outputMatrix(int matrix[][64], const size_t rows, const size_t columns)
{
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void swapValues(int& firstValue, int& secondValue)
{
    int temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    return;
}

void transposingMatrix(int matrix[][64], const size_t rows, const size_t columns)
{
    for (unsigned i = 0, jHolder = i; i < rows; i++)
    {
        for (unsigned j = 0; j < columns; j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                swapValues(matrix[jHolder][j], matrix[j][jHolder]);
                jHolder++;
            }
        }
    }

    outputMatrix(matrix, rows, columns);
}

void inputValuesInMatrix(int matrix[][64], size_t& rows, size_t& columns)
{
    cout << "Input values in the matrix: " << endl;

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    size_t columns;
    cout << "Input collumns: ";
    cin >> columns;

    int matrix[64][64];

    inputValuesInMatrix(matrix, columns, columns);

    transposingMatrix(matrix, columns, columns);
}
