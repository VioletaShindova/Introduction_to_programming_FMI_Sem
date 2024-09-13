// Sem.14_Ex10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Find the smallest element in array

//linear search
unsigned findSmallestElementInArrayRec(const unsigned* array, const size_t size, unsigned& minElement)
{
    if (size == 0) //check if it is empty
    {
        return INT_MIN;
    }
    if (size == 1)
    {
        return array[0];
    }

    unsigned currentMinElement = *array;

    if (currentMinElement < minElement)
    {
        minElement = currentMinElement;
    }

    return (findSmallestElementInArrayRec(array + 1, size - 1, minElement));

}


int myMax(const unsigned& firstElement, const unsigned& secondElement)
{
    return ((firstElement > secondElement) ? firstElement : secondElement);
}

//linearSearch
int getMaxElementRec(const unsigned* array, const size_t size)
{
    if (size == 0)
    {
        return INT_MIN;
    }
    if (size == 1) //check for an array with 1 element
    {
        return array[0];
    }
    

    return myMax(array[0], getMaxElementRec(array + 1, size - 1));

}

int findMaxElementInArrayRec2(const unsigned* array, const size_t size)
{
    if (size == 0) //checks for an empty array
    {
        return INT_MIN;
    }
    if (size == 1) //check for an array with 1 element
    {
        return array[0];
    }

    const unsigned mid = size / 2;
    
    return myMax(findMaxElementInArrayRec2(array, mid), findMaxElementInArrayRec2(array + mid, size - mid));
}

int main()
{
    constexpr size_t SIZE = 6;
    unsigned array[SIZE] = { 4,5,3,1,2,56, };

    cout << findSmallestElementInArrayRec(array, SIZE, array[0]);
}

