// Sem.15_Ex1_Fibb_Memoization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <climits>
using namespace std;

unsigned fibbRec(const unsigned number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }

    return fibbRec(number - 1) + fibbRec(number - 2);
}


unsigned fibb_rec(const unsigned number, unsigned* cache)
{
    if (number <= 1)
    {
        return 1;
    }

    if (cache[number] != 0)
    {
        return cache[number];
    }
    else
    {
        unsigned current = fibb_rec(number - 1, cache) + fibb_rec(number - 2, cache);
        cache[number] = current;
        return current;
    }
}

unsigned fibb(const unsigned& number)
{
    //initialize all elements to 0
    unsigned* cache = new unsigned [number + 1] {0}; 
    unsigned result = fibb_rec(number, cache);
    delete[] cache;
    return result;
}

int main()
{
    cout << fibb(45);
    return 0;
}

