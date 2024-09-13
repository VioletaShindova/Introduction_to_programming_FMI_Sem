// Sem.14_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Да се реализира рекурсивна функция, която пресмята n - тото число на фибоначи.

int fibbRec(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return fibbRec(n - 1) + fibbRec(n - 2);
}

int main()
{
    cout << fibbRec(10);

    return 0;
}

