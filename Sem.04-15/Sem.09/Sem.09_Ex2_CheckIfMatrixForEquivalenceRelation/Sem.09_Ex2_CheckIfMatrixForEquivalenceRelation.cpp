// Sem.09_Ex2_CheckIfMatrixForEquivalenceRelation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функция, която приема матрица NxN и проверява дали релацията, 
//която представлява матрицата, е релация на еквивалентност.

constexpr size_t COLUMNS = 4;
constexpr size_t ROWS = 4;

bool checkAllIndexes(size_t firstIndex, size_t secondIndex, const bool matrix[][COLUMNS])
{
    bool result = true;
    for (size_t currentIndex = 0; currentIndex < COLUMNS; currentIndex++)
    {
        if (matrix[firstIndex][secondIndex] == 1 && matrix[secondIndex][currentIndex] == 1)
        {
            if (matrix[firstIndex][currentIndex] != 1)
            {
                result = false;
                break;
            }
        }
    }
    return result;
}

bool isTransitive(const bool matrix[][COLUMNS])
{
    bool result = true;
    for (size_t i = 0; i < ROWS; i++)
    {
            for (size_t j = 0; j < COLUMNS; j++)
            {
                if (!checkAllIndexes(i, j, matrix))
                {
                    result = false;
                    break;
                }
            }
        if (!result)
        {
            break;
        }
    }
    return result;
}

bool isSymmetric(const bool matrix[][COLUMNS])
{
    bool result = true;
    for (size_t i = 0; i < ROWS; i++)
    {
        for (size_t j = 0; j < COLUMNS; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                result = false;
                break;
            }
        }
    }
    return result;
}

bool isReflexive(const bool matrix[][COLUMNS])
{
    bool result = true;
    for (size_t i = 0; i < COLUMNS; i++)
    {
        if (matrix[i][i] != 1)
        {
            result = false;
            break;
        }
    }
    return result;
}

int main()
{
    bool matrix[][COLUMNS] = { {1,1,0,1}, {1,1,0,1}, {0,0,1,0}, {1,1,0,1} };
    //bool matrix[][COLUMNS] = { {1,1,0}, {0,1,1}, {0,0,1} };

    if (isReflexive(matrix))
    {
        if (isSymmetric(matrix))
        {
            if (isTransitive(matrix))
            {
                cout << "The matrix has equivalence relation";
                return 0;
            }
        }
    }
    cout << "There is no equivalence relation";
    return 0;
}

