// OperationWithNumbersRef_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void operatingWithNumbers(int& firstNumber, int& secondNumber, int& thirdNumber)
{
    secondNumber -= firstNumber;
    firstNumber *= 2;
    thirdNumber += 10;
}

int main()
{
    int number1;
    cout << "Input first number: ";
    cin >> number1;

    int number2;
    cout << "Input second number: ";
    cin >> number2;

    int number3;
    cout << "Input third number: ";
    cin >> number3;

    operatingWithNumbers(number1, number2, number3);

    cout << "First number has become: " << number1 << endl;
    cout << "Second number has become: " << number2 << endl;
    cout << "Third number has become: " << number3;
}