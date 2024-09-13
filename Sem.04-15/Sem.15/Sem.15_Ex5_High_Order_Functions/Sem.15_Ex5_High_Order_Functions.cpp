// Sem.15_Ex5_High_Order_Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//FUNCTION POINTERS
unsigned myMultiplication(const unsigned& a, const unsigned& b)
{
    return a * b;
}

unsigned myDivision(const unsigned& a, const unsigned& b)
{
    return a / b;
}

unsigned mySubtraction(const unsigned& a, const unsigned& b)
{
    return a - b;
}

unsigned myAdd(const unsigned& a, const unsigned& b)
{
    return a + b;
}

//higher-order function that takes a function pointer
//the signature of the function pointer must match the signature of the function
//unsigned (*func)(const unsigned&, const unsigned&) ~ unsigned myAdd(const unsigned& a, const unsigned& b)
unsigned applyFunction(const unsigned& a, const unsigned& b, unsigned (*func)(const unsigned&, const unsigned&))
{
    return func(a, b);
}

int main()
{
    cout << applyFunction(10, 20, myAdd);
    cout << applyFunction(10, 20, mySubtraction);
    cout << applyFunction(10, 20, myDivision);
    cout << applyFunction(10, 20, myMultiplication);  

    return 0;
}