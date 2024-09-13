// Sem.09_Ex5_LinearEquationSolver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Функция, която приема матрица NxN+1 и решава системата от линейни уравнения (с ненулеви коефициенти), 
//репрезентирана в матрицата.
//Вход:

//3 2 5 0

//2 - 3 4 10

//2 1 1 4

//Изход: 4, -11.14, -12.85

//Тук се решава системата:

//-3x + 2y - 5z = 0

//2x - 3y + 4z = 10

//2x + y + z = 4

//Тя има решение : x = 14, y = -78 / 4 (-11.14), z = -90 / 7 (-12.85).

constexpr size_t ROWS = 2;
constexpr size_t COLLUMNS = 3;

void substract(double firstArray[], double secondArray[], double coef)
{
    for (size_t i = 0; i < COLLUMNS; i++)
    {
        firstArray[i] -= (secondArray[i] * coef);
    }
}

void makeAllZeros(double matrix[][COLLUMNS], int currentRow)
{
    for (size_t i = 0; i < ROWS; i++)
    {
        if (i != currentRow) 
        {
            substract(matrix[i], matrix[currentRow], matrix[i][currentRow]);
        }
    }
}

void divideBy(double array[], double by)
{
    for (size_t i = 0; i < COLLUMNS; i++)
    {
        array[i] /= by;
    }
}

void gauss(double matrix[][COLLUMNS], double result[])
{
    for (size_t i = 0; i < ROWS; i++)
    {
        divideBy(matrix[i], matrix[i][i]);
        makeAllZeros(matrix, i);
    }

    for (size_t i = 0; i < ROWS; i++)
    {
        result[i] = matrix[i][COLLUMNS - 1];
    }
}

void inputValues(double matrix[][COLLUMNS])
{
    cout << "Input first equation: " << endl;
    for (size_t i = 0; i < ROWS; i++)
    {
        for (size_t j = 0; j < COLLUMNS; j++)
        {
            cin >> matrix[i][j];
        }
        if (i + 1 == ROWS)
        {
            break;
        }
        cout << "Input second equation: " <<  endl;
    }
}

int main()
{
    double matrix[ROWS][COLLUMNS] = {0};
    double result[ROWS];

    inputValues(matrix);
    gauss(matrix, result);

    for (int i = 0; i < ROWS; i++)
        cout << result[i] << " ";
}
