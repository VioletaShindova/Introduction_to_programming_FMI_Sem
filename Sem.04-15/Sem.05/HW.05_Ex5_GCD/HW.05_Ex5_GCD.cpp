// HW.05_Ex5_GCD.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Намерете най-големия общ делител на 4 естесвени въведени числа.

//void checkValues(unsigned& firsNumber, unsigned& secondNumber)
//{
//    if (firsNumber > secondNumber)
//    {
//        unsigned temp = firsNumber;
//        firsNumber = secondNumber;
//        secondNumber = temp;
//    }
//    return;
//}
//
//unsigned findGcd(unsigned firsNumber, unsigned secondNumber)
//{
//    checkValues(firsNumber, secondNumber);
//    for (size_t i = firsNumber; i >= 2; i--)
//    {
//        if (firsNumber % i == 0 && secondNumber % i == 0)
//        {
//            return i;
//        }
//    }
//    return 1;
//}
//
//unsigned gcd(unsigned firsNumber, unsigned secondNumber, unsigned thirdNumber, unsigned fourthNumber)
//{
//    return findGcd(findGcd(firsNumber, secondNumber), findGcd(thirdNumber, fourthNumber));
//}
//
//int main()
//{
//    unsigned firstNumber;
//    cout << "Input a first number: ";
//    cin >> firstNumber;
//
//    unsigned secondNumber;
//    cout << "Input a second number: ";
//    cin >> secondNumber;
//
//    unsigned thirdNumber;
//    cout << "Input a third number: ";
//    cin >> thirdNumber;
//
//    unsigned fourthNumber;
//    cout << "Input a fourth number: ";
//    cin >> fourthNumber;
//
//    cout << gcd(firstNumber, secondNumber, thirdNumber, fourthNumber);
//}


unsigned sortNumberRec(unsigned tempNumber, unsigned oldNumber, unsigned newNumber, unsigned counter)
{
    if (counter == 10)
    {
        return newNumber;
    }
    if (oldNumber == 0)
    {
        return sortNumberRec(tempNumber, tempNumber, newNumber, counter + 1);
    }

    if (oldNumber % 10 == counter)
    {
        (newNumber *= 10) += (oldNumber % 10);
        return sortNumberRec(tempNumber, oldNumber / 10, newNumber, counter);
    }
    return sortNumberRec(tempNumber, oldNumber / 10, newNumber, counter);
}

int main()
{
    cout << sortNumberRec(63148, 63148, 0, 1);
}