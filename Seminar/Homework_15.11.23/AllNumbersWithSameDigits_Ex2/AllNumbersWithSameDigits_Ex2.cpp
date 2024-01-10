// AllNumbersWithSameDigits_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//I had help from a friend and from chat gpt, for the algorithm

int getCountSortResult(int number, int sortedNumber, int digit)
{
    while (number != 0)
    {
        int remainder = number % 10;
        if (remainder == digit)
        {
            (sortedNumber *= 10) += digit;
        }
        number /= 10;
    }
    return sortedNumber;
}

int countSort(int number)
{
    int sortedNumber = 0;
    for (int i = 9; i >= 0; i--)
    {
        int temp = number;
        sortedNumber = getCountSortResult(number, sortedNumber, i);
    }
    return sortedNumber;
}

bool isValidPermutation(int number, int permutation)
{
    return (countSort(number) == countSort(permutation)) ? 1 : 0;
}

void numberPermutations(int number, int array[])
{
    int counter = 0;
    for (int permutation = 1000; permutation < 9999; permutation++)
    {
        if (isValidPermutation(number, permutation))
        {
            array[counter] = permutation;
            counter++;
        }
    }
}

int main()
{
    unsigned int fourDigitNumber;
    cout << "Input a four digit number: ";
    cin >> fourDigitNumber;
    int array[24]; //if each digit is different, then it has 24 variations
    numberPermutations(fourDigitNumber, array);
    
    for (int i = 0; i < 24; i++)
    {
        if (array[i] == 0)
        {
            break;
        }
        cout << array[i] << " ";
    }

}
