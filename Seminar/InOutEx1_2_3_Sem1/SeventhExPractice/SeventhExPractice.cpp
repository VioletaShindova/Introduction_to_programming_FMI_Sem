// SeventhExPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //ex. 7 

    /*Въвежда се цяло число n - n лева. Да се изведе на конзолата
    как може да се разпределят по банкноти, така че да имаме минимален брой банкноти.
    В условието приемаме, че имаме банкноти от 1 и 2 лева.

    Вход: 193, Изход: 1x100lv 1x50lv 2x20lv 0x5lv 1x2lv 1x1lv*/
    //769

    // Constant definition
    const int cHundredLv = 100;
    const int cFiftyLv = 50;
    const int cTwentyLv = 20;
    const int cTenLv = 10;
    const int cFiveLv = 5;
    const int cTwoLv = 2;
    const int cOneLv = 1;

    //Variable defenition
    int moneyLv = 0;

    int hundredLvCounter = 0;
    int fiftyLvCounter = 0;
    int twentyLvCounter = 0;
    int tenLvCounter = 0;
    int fiveLvCounter = 0;
    int twoLvCounter = 0;
    int oneLvCounter = 0;

    int newNumber = 0;

    std::cout << "Input number: ";
    // Limit of the Max entred number Nbr=999 !!!
    std::cin >> moneyLv;


    // Get the digit of the hunreds
    hundredLvCounter = moneyLv / cHundredLv;
    newNumber = moneyLv - (hundredLvCounter * cHundredLv);

    // Get number of fifty
    fiftyLvCounter = (newNumber >= cFiftyLv) ? (newNumber / cFiftyLv) : 0;
    newNumber = newNumber - (fiftyLvCounter * cFiftyLv);

    twentyLvCounter = (newNumber >= cTwentyLv) ? (newNumber / cTwentyLv) : 0;
    newNumber = newNumber - (twentyLvCounter * cTwentyLv);

    tenLvCounter = (newNumber >= cTenLv) ? (newNumber / cTenLv) : 0;
    newNumber = newNumber - (tenLvCounter * cTenLv);

    fiveLvCounter = (newNumber >= cFiveLv) ? (newNumber / cFiveLv) : 0;
    newNumber = newNumber - (fiveLvCounter * cFiveLv);

    twoLvCounter = (newNumber >= cTwoLv) ? (newNumber / cTwoLv) : 0;
    newNumber = newNumber - (twoLvCounter * cTwoLv);

    oneLvCounter = (newNumber >= cOneLv) ? (newNumber / cOneLv) : 0;
    newNumber = newNumber - (oneLvCounter * cOneLv);

    // Print rezult
    std::cout << hundredLvCounter << "x100 " << fiftyLvCounter << "x50 " << twentyLvCounter << "x20 " <<
        tenLvCounter << "x10 " << fiveLvCounter << "x5 " << twoLvCounter << "x2 " << oneLvCounter << "x1";
}
