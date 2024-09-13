// Fibbonachi_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

unsigned fibb(unsigned number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }

    return (fibb(number - 1) + fibb(number - 2));
    
}

int main()
{
    //unsigned number;
    //cout << "Input number: ";
    //cin >> number;

    cout << fibb(10);
}
