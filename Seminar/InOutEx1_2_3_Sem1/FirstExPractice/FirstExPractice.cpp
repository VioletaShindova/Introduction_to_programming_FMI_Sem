#include <iostream>

int main()
{
    //exercise 1
    int number;
    std::cout << "Input number: ";
    std::cin >> number;

    bool numberCheck = (number % 2) == 0; // we use %2 to check whether the number 
                                          //can be devided by 2

    std::cout << numberCheck;
}
