#include <iostream>

int main()
{
    //ex 2

    //????: 265, ????? : 563
    //???? : 289, ????? : 983


    int number;
    std::cout << "Input number: ";
    std::cin >> number;

    int units = number % 10; 
    int dozens = number / 10 % 10;
    int hundreds = number / 100 % 10;
    int digitHolder = units;

    units = hundreds + 1;
    hundreds = digitHolder;

    std::cout << hundreds << dozens << units;
}
