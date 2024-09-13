// Sem.14_Ex12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//С колко най-малко операции могат да се представи числото n. Иползвайте мемоизация

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

    unsigned div2 = INT_MAX, div3 = INT_MAX, min1 = INT_MAX;

    if (number % 3 == 0)
    {

    }
}

unsigned getMinOperations(const unsigned number)
{
    unsigned* cache = new unsigned[number + 1] {0};
    unsigned res = getMinOperationsRec(number, cache);
    delete[] cache;
    return res;
}

int main()
{
    cout << getMinOperations(200);
    return 0;
}
