// SixthExPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //ex. 6

    int firstNumber;
    int secondNumber;

    std::cout << "Input first number: ";
    std::cin >> firstNumber;
    std::cout << "Input second number: ";
    std::cin >> secondNumber;

    int result = (firstNumber + secondNumber) * (firstNumber + secondNumber) *
        (firstNumber + secondNumber) * (firstNumber + secondNumber) + 
        (firstNumber - secondNumber) * (firstNumber - secondNumber);

    //int result = pow((firstNumber + secondNumber), 4) - pow((firstNumber - secondNumber), 2);

    std::cout << result;
}
