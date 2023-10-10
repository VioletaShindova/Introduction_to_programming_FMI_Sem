// ThirdExPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int main()
{
    //ex. 3 

    char symbol;
    std::cout << "Input symbol: ";
    std::cin >> symbol;

    bool symbolCheck = (symbol == 'a') || (symbol == 'A') || (symbol == 'e') || (symbol == 'E') || (symbol == 'o') || (symbol == 'O') || (symbol == 'i') ||
        (symbol == 'I') || (symbol == 'u') || (symbol == 'U');

    std::cout << symbolCheck;
}

