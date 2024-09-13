// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Намери всички прости числа в интервала от 1 до n.

void markAsNotPrime(unsigned index, unsigned destination, bool sieve[])
{
    unsigned start = index + index;
    for (size_t i = start; i <= destination; i += index)
    {
        sieve[i] = true;
    }
}

void sieveErathostenes(unsigned destination, bool sieve[])
{
    for (size_t i = 2; i <= destination; i++)
    {
        if (!sieve[i]) 
        {
            cout << i << endl;
            markAsNotPrime(i, destination, sieve);
        }
    }
}

void assignValuesToAllCells(bool array[], unsigned length, bool value)
{
    for (size_t i = 0; i <= length; i++)
    {
        array[i] = value;
    }   
}

int main()
{
    unsigned destination;
    cout << "Input destination: ";
    cin >> destination;

    constexpr int MAX_SIZE = 1024;
    bool sieve[MAX_SIZE];
    
    assignValuesToAllCells(sieve, destination, false);
    sieveErathostenes(destination, sieve);

}
