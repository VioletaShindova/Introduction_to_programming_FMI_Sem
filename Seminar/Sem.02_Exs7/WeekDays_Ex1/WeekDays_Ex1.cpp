// WeekDays_Ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Ex1: 
    // Да се напише програма, която въвежда цяло число отпечатава с думи кой ден от седмицата е.

    //Variable declaration
    short number;

    cout << "Input number: ";
    cin >> number;

    switch (number)
    {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "Invalid number!";
        break;
    }
}

