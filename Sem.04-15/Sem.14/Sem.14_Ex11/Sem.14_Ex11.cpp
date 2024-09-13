// Sem.14_Ex11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Сметнете биномен коефициент в рекурсивна функция

unsigned factorialRec(const unsigned number)
{
    if (number == 0)
    {
        return 1;
    }

    return number * factorialRec(number - 1);
}

unsigned binomialCoefficientRec(const unsigned n, const unsigned k)
{
    if ((n - k) == 0)
    {
        return 1;
    }

    return (factorialRec(n) / (factorialRec(k) * factorialRec(n-k)));
}

int main()
{
    cout << binomialCoefficientRec(10, 3);
}
