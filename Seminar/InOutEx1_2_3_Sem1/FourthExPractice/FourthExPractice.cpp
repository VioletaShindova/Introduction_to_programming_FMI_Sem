// FourthExPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    // ex. 4 

    int grade;
    std::cout << "Input grade: ";
    std::cin >> grade;

    bool gradeCheck = (grade >= 2 && grade <= 6) == true;

    std::cout << gradeCheck;
}
