// Sem.06_Ex6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//От даден масив от сортирани последнователни числа са премахнати някои числа. Напишете фунцкия, 
//която приема такъв масив и връща най - малкото премахнато число.

//Решението ви трябва да работи с логартмична сложност(а не с линейно минаване през масива).

//Вход: [5 6 7 9 10 12 13] , Изход : 8 //премахнатите числа са 8 и 11.

//Вход : [10 12 13 14 16] , Изход : 11 //премахнатите числа са 11 и 16.

//Модифицирайте функцията, за да отпечатване и най - голямото премахнато число

unsigned findSmallestMissingNumber(unsigned array[], const size_t length)
{
    unsigned leftSide = 0;
    unsigned rightSide = length - 1;

    while (leftSide <= rightSide)
    {
        unsigned mid = leftSide + ((rightSide - leftSide) / 2);
        if (array[mid] != array[0] + mid) {
            if (mid == 0 || array[mid - 1] == array[0] + mid - 1) {
                return array[0] + mid;
            }
            rightSide = mid - 1;
        }
        else 
        {
            leftSide = mid + 1;
        }
    }
}

int main()
{
    //constexpr size_t length = 7;
    constexpr size_t length = 5;
    //unsigned array[] = { 5, 6, 7, 9, 10, 12, 13 };
    unsigned array[] = { 10, 12, 13, 14, 16 };

    cout << findSmallestMissingNumber(array, length);
    
}