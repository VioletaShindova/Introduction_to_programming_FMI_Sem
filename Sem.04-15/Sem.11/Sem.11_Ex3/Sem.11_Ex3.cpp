// Sem.11_Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Да се напише функция, която приема масив от целия числа,
//който е получен след конкатенация на два сортирани масивa, и го сортира.

//In ascending way

void printArray(const int* ptr, const size_t& size)
{
    if (!ptr)
    {
        return;
    }

    for (size_t i = 0; i < size; i++)
    {
        cout << ptr[i] << ' ';
    }
    return;
}

void checkAndSwapValues(int& number, int*& ptr, const size_t arrayLength)
{
    if (!ptr)
    {
        return;
    }

    for (size_t i = 0; i < arrayLength; i++)
    {
        if (number < ptr[i]) //for descending way  if (number > ptr[i]) 
        {
            int temp = number;
            number = ptr[i];
            ptr[i] = temp;
        }
    }
    return;
}

void fillArray(int* ptr, const int* firstArray, unsigned& currentIndex, const size_t newArraySize)
{
    if (!firstArray)
    {
        return;
    }

    for (size_t i = currentIndex; i < newArraySize; i++)
    {
        ptr[i] = *(firstArray++); //firstArray++;
    }
    return;
}

void mySortArray(const int* firstArray, const int* secondArray, int* ptr, const size_t arrayLength)
{
    if (!firstArray || !secondArray)
    {
        return;
    }

    const size_t newArraySize = 2 * arrayLength; //12
    unsigned currentIndex = 0;
    ptr = new int[newArraySize];

    fillArray(ptr, firstArray, currentIndex, newArraySize);

    currentIndex += arrayLength;

    fillArray(ptr, secondArray, currentIndex, newArraySize);

    for (size_t i = 0; i < newArraySize; i++)
    {
        checkAndSwapValues(ptr[i], ptr, newArraySize);
    }
    
    printArray(ptr, newArraySize);
}

int main()
{
    //MORE CORRECT WAY
    //Dimitriev way
    /*int firstArray[arrayLength];
    int secondArray[arrayLength];
    int concatSize = 2 * arrayLength;
    int* concatArray = concatArrays(firstArray, arrayLength, secondArray, arrayLength);

    sort(concatArray, concatSize);
    print(concatArray, concatSize);

    delete[] concatArray;*/


    constexpr size_t arrayLength = 6;

    int firstArray[arrayLength] = { 0, 6, 1, 3, 10, 4 };
    int secondArray[arrayLength] = { -7, -3, -10, -5, 11, 2 };

    int* ptr = nullptr;

    mySortArray(firstArray, secondArray, ptr, arrayLength);

    delete[] ptr;

    return 0;
}