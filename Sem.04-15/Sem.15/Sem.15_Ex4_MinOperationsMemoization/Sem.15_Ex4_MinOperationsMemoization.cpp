// Sem.15_Ex4_MinOperationsMemoization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned min(const unsigned& a, const unsigned& b)
{
    return ((a < b) ? a : b);
}

unsigned min(const unsigned& a, const unsigned& b, const unsigned& c)
{
    return min(min(a, b), c);
}

unsigned getMinOperationsRec(const unsigned number, unsigned* cache)
{
    if (number == 1)
    {
        return 0;
    }

    if (cache[number] != 0)
    {
        return cache[number];
    }

    unsigned div2 = INT_MAX;
    unsigned div3 = INT_MAX;
    unsigned min1 = INT_MAX;

    if (number % 3 == 0)
    {
        div3 = getMinOperationsRec(number / 3, cache);
    }
    if (!(number & 1))
    {
        div2 = getMinOperationsRec(number / 2, cache);
    }
    min1 = getMinOperationsRec(number - 1, cache);

    unsigned result = min(div2, div3, min1) + 1;

    cache[number] = result;
    return result;
}

unsigned getMinOperations(const unsigned number)
{
    unsigned* cache = new unsigned[number + 1] {0};
    unsigned result = getMinOperationsRec(number, cache);
    delete[] cache;
    return result;
}

int main()
{
    cout << getMinOperations(200);
    return 0;
}

