// HW.05_Ex3_Max&MinDigit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned getMinDigit(unsigned number)
{
    unsigned temp = 0;
    unsigned result = 0;
    unsigned tempNumber = number;

    while (temp < 10)
    {
        if (number % 10 == temp)
        {
            result = number % 10;
            break;
        }

        if (number / 10 == 0)
        {
            number = tempNumber;
            temp++;
            continue;
        }
        number /= 10;
    }
    return result;
}

unsigned getMaxDigit(unsigned number)
{
    int temp = 9;
    unsigned result = 0;
    unsigned tempNumber = number;

    while (temp > -1)
    {
        if (number % 10 == temp)
        {
            result = number % 10;
            break;
        }

        if (number / 10 == 0)
        {
            number = tempNumber;
            temp--;
            continue;
        }
        number /= 10;
    }
    return result;
}

void getMinAndMaxDigits(unsigned number, unsigned& maxDigit, unsigned& minDigit)
{
    maxDigit = getMaxDigit(number);
    minDigit = getMinDigit(number);
    return;
}

int main()
{
    unsigned maxDigit = 0;
    unsigned minDigit = 0;
    getMinAndMaxDigits(1234, maxDigit, minDigit);

    cout << maxDigit << " " << minDigit;
}
