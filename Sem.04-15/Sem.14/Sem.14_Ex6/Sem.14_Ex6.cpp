// Sem.14_Ex6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Да се реализира рекурсивна функция, която приема сортиран масив и число 
//и връща дали числото се съдържа в масива. (Двоично търсене).

//bool binarySearchRec(const int* array, const size_t size, const int element)
//{
//    //checks if the array is empty  
//    if (size == 0)
//        return false;
//
//    const unsigned mid = size / 2;
//    if (element < (array[mid]))
//    {
//        return binarySearchRec(array, mid, element);
//    }
//    else if (element > (array[mid]))
//    {
//        return binarySearchRec(array + mid + 1, size - mid - 1, element);
//    }
//    else
//    {
//        return true;
//    }
//}

bool binarySearchRec(const int* array, const size_t size, const int& element)
{
    if (size == 0)
    {
        return false;
    }

    int mid = size / 2;
    if (array[mid] == element)
    {
        return true;
    }
    else if (element < array[mid])
    {
        return binarySearchRec(array, size - mid - 1, element);
    }
    else
    {
        return binarySearchRec(array + mid + 1, size - mid, element);
    }
}

int main()
{
    int array[] = { 2,5,13,9,12 };

    cout << binarySearchRec(array, 5, 5);
}

