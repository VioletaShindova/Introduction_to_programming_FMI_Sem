// HW.08_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Да се напише функция, която приема масив, в който всяко число се среща 2 пъти с изключение на едно число, 
//което се среща веднъж.Напишете функция, която приема такъв масив и връща кое е това число. 
//(Подсказка: използвайте побитови операции, за да постигнете линейно решение)

//Вход: [9 18 9 12 18 15 12] , Изход : 15

constexpr size_t SIZE_ARR = 7;

unsigned countElement(unsigned element, const unsigned array[])
{
    unsigned counter = 0;
    for (size_t i = 0; i < SIZE_ARR; i++)
    {
        unsigned mask = array[i];
        if (counter > 1)
        {
            break;
        }

        if ((mask & array[i]) == element)
        {
            counter++;
        }
    }
    return counter;
}

unsigned findSingleNumber(const unsigned array[])
{
    for (size_t i = 0; i < SIZE_ARR; i++)
    {
        if(countElement(array[i], array) == 1)
        {
            return array[i];
        }
    }
    return 0;
}

int main()
{
    unsigned array[SIZE_ARR] = { 9, 18, 9, 12, 18, 15, 12 };

    cout << findSingleNumber(array);
}
