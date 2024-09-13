// Solving_Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;  

void divideBy(double arr)

void gauss(double matrix[][64], const size_t n, double result)
{
    size_t rows = n;
    size_t colls = n + 1;

    for (size_t i = 0; i < rows; i++)
    {
        divideBy();
    }
}

void inputInfo(double matrix[][64], const size_t rows, const size_t colls)
{
    cout << "Input values for the matrix:" << endl;

    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < colls; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

int main()
{
    constexpr size_t max_rows = 64;
    constexpr size_t max_colls = 64;

    size_t rows;
    cout << "Input rolls: ";
    cin >> rows;

    size_t colls;
    cout << "Input colls: ";
    cin >> colls;

    double matrix[max_rows][max_colls];
    inputInfo(matrix, rows, colls);

    double result[max_rows];

    gauss();

}
