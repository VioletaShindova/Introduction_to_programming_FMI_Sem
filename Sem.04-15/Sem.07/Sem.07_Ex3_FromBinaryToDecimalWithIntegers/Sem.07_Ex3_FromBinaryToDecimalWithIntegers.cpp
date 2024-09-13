// Sem.07_Ex3_FromBinaryToDecimalWithIntegers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете програма, която конвертира число от двоична в десетична бройна система без иползването на масиви.

unsigned toDecimal(int binaryNumber)
{
    unsigned counter = 1;
    unsigned newNumber = 0;
    while (binaryNumber != 0)
    {
        newNumber += ((binaryNumber % 10) * counter);
        counter *= 2;
        binaryNumber /= 10;
    }
    return newNumber;
}

int main()
{
    int binaryNumber;
    cout << "Input a binary number: ";
    cin >> binaryNumber;

    cout << toDecimal(binaryNumber);

}

