// EighthExPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //ex. 8 
    int firstNumber;
    int secondNumber;

    std::cout << "Input first number: ";
    std::cin >> firstNumber; //265
    std::cout << "Input second number: ";
    std::cin >> secondNumber; //44

    //(a > b) ? a : b; - ternary operator
    int biggerNumberCheck = (firstNumber > secondNumber) ? firstNumber : secondNumber;


    std::cout << biggerNumberCheck;
}