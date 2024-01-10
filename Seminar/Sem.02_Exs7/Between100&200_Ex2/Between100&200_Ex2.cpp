// Between100&200_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //Ex 2
    /*(Between 100 and 200): Да се напише програма, която въвежда цяло 
    число и проверява дали е под 100, между 100 и 200 или над 200. Да се 
    отпечатат съответно съобщения като в примерите по-долу:*/

    /*short number;
    const short oneHundred = 100;
    const short twoHundred = 200;

    cout << "Input numeber: ";
    cin >> number;

    if (number < oneHundred)
    {
        cout << "Less than " << oneHundred;
    }
    else if (oneHundred <= number && twoHundred >= number)
    {
        cout << "Between " << oneHundred << " and " << twoHundred;
    }
    else
    {
        cout << "Greater than " << twoHundred;
    }*/




    int x; //5
    int y; //6
    int z = 1;

    cout << "Input number x: ";
    cin >> x;
    cout << "Input number y: ";
    cin >> y;

    bool checkValue = (x > y);


    cout << "max " << x * checkValue + !checkValue * y;

    cout << "min" << (checkValue * y) + !checkValue * x;

    //max/min
}
