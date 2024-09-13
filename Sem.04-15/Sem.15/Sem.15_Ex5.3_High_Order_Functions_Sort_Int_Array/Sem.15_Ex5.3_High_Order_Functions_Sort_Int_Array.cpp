// Sem.15_Ex5.3_High_Order_Functions_Sort_Int_Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/* 
Напишете програма за сортиране на масив от числа с помощта на указател към функция. 
Програмата трябва да позволява на потребителя да избира дали иска сортиране във възходящ или низходящ ред.

Изисквания:

Напишете две функции за сортиране:
едната за възходящо сортиране,
другата за низходящо.
Използвайте указател към функция, за да извикате съответната функция въз основа на избора на потребителя.
*/

void fillArray(int* ptrArray, const size_t size)
{
    cout << "Fill array: " << endl;
    for (size_t i = 0; i < size; i++)
    {
        cin >> ptrArray[i];
    }
    return;
}

void printArray(int* array, const size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << array[i] << ' ';
    }
    return;
}

void chooseAscOrDescSortOfArray(unsigned& result)
{
    cout << "Choose a number for the type of sort: \n";
    cout << "1. Ascending \n";
    cout << "2. Descending \n";
    cin >> result;
}

void insertionSortDesc(int* array, const size_t size)
{
    for (size_t i = 1; i < size; i++) // Start from index 1 (second element)
    {
        int currentElement = array[i];
        int currentIndex = i - 1;
        while (currentIndex >= 0 && array[currentIndex] < currentElement)
        {
            array[currentIndex + 1] = array[currentIndex]; // Shift to the right
            currentIndex--;
        }
        array[currentIndex + 1] = currentElement; // Insert at the correct position
    }
}

void insertionSortAsc(int* array, const size_t size)
{
    for (size_t i = 1; i < size; i++)
    {
        int currentIndex = i - 1;
        int currentElement = array[i];
        while (currentIndex >= 0 && array[currentIndex] > currentElement)
        {
            array[currentIndex + 1] = array[currentIndex];
            currentIndex--;
        }
        array[currentIndex + 1] = currentElement;
    }
}

void sortArray(int* array, const size_t size, void(*func)(int*, const size_t))
{
    func(array, size);
    return;
}

int main()
{
    size_t sizeOfArray = 0;
    cout << "Input size of the array: ";
    cin >> sizeOfArray;

    int* ptrArray = new int[sizeOfArray];
    
    fillArray(ptrArray, sizeOfArray);

    unsigned result = 0;
    chooseAscOrDescSortOfArray(result);

    switch (result)
    {
    case 1: sortArray(ptrArray, sizeOfArray, insertionSortAsc); break;
    case 2: sortArray(ptrArray, sizeOfArray, insertionSortDesc); break;
    default: cout << "There isn't such number";
        break;
    }

    printArray(ptrArray, sizeOfArray);

    delete[] ptrArray;
}

