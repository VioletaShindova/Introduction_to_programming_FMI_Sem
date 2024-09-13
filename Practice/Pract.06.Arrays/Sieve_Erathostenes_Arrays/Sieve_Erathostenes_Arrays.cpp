// Sieve_Erathostenes_Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void markAsNotPrime(bool sieve[], const unsigned position, const int number, const bool value)
{

    for (unsigned i = position + position; i <= number; i += position)
    {
        sieve[i] = value;
    }
}

void sieveOfErathosthenes(bool sieve[], const int number)
{
    for (unsigned i = 2; i <= number; i++)
    {
        if (!(sieve[i]))
        {
            cout << i << " ";
            markAsNotPrime(sieve, i, number, true);
        }
    }
}

//setting all the values to false
void assignValueToAllCells(bool sieve[], const int size, const bool value)
{
    for (unsigned i = 2; i <= size; i++)
    {
        sieve[i] = value;
    }
}

int main()
{
    constexpr int size = 1024;
    int newSize;
    cout << "Input number: ";
    cin >> newSize;
    bool sieve[size];
    assignValueToAllCells(sieve, newSize, false);
    sieveOfErathosthenes(sieve, newSize);
}
    