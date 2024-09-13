// HW.05_Ex2_ConcatNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned reverse(unsigned number)
{
    unsigned newNumber = 0;

    while (number != 0)
    {
        (newNumber *= 10) += (number % 10);
        number /= 10;
    }
    return newNumber;
}

unsigned concat(unsigned firstNumber, unsigned secondNumber)
{
    if (firstNumber == 0)
        return 0;

    if (secondNumber == 0)
        return 10 * firstNumber + 0;

    unsigned newNumber = firstNumber;
    unsigned temp = reverse(secondNumber);
    
    while (temp != 0)
    {
        (newNumber *= 10) += (temp % 10);
        temp /= 10;
    }
    return newNumber;
}

int main()
{
    unsigned res = concat(123, 456);

    cout << res;
}
