// Sem.11_Ex5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете функция, която приема масив от цели числа и цяло число и елемент на масива. 
//Функцията да преподрежда елементите, така че всички по-малки елементи от подадения 
//да са в ляво от него, а всички по-големи - в дясно. 
//(Забележка: Задачата да се реши с помощта на допълнителен масив - същестува и решение 
//без допълнителна памет (Hoare's partition, Lomuto partition и други), но то не се изисква)

//Вход: [1, 5, 6, 3, 0, -1, 2, 9, 7] , 3 Изход : [1, 0, 2, , -1, 3, 6, 5, 9, 7]

constexpr size_t ARRAY_SIZE = 9;

void rearrangeBiggerElements(int*& array, int element, size_t& currentIndex)
{
    if (!array)
    {
        return;
    }

    size_t startPointOfSecondHalf = (ARRAY_SIZE / 2);

    for (size_t i = startPointOfSecondHalf; i < ARRAY_SIZE; i++)
    {
        if(array[current_Index] == element)
        if (array[currentIndex] > array[i] && array[currentIndex] > element)
        {
            int temp = array[currentIndex];
            array[currentIndex] = array[i];
            array[i] = temp;
            currentIndex++;
        }
    }
    return;
}

void rearrangingElementsOfArray(int* array, int element)
{
    if (!array)
    {
        return;
    }

    int* tempArray = new int[ARRAY_SIZE];
    size_t temp_size = ARRAY_SIZE / 2;

    for (size_t i = 0; i < temp_size; i++)
    {
        if (array[i] > element) 
        {
            rearrangeBiggerElements(array, element, i);
        }
        
    }

    if (array[temp_size] < element)
    {
        int temp = array[temp_size];
        array[temp_size] = *array;
        *array = temp;
    }
    else if (array[temp_size] > array[ARRAY_SIZE])
    {
        int temp = array[temp_size];
        array[temp_size] = array[ARRAY_SIZE];
        array[ARRAY_SIZE] = temp;
    }





}

int main()
{
    int array[ARRAY_SIZE] = { 1, 5, 6, 3, 0, -1, 2, 9, 7 };

    rearrangingElementsOfArray(array, 3);


}
