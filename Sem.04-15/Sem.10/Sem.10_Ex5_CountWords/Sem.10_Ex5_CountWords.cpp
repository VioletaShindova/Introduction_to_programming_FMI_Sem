// Sem.10_Ex5_CountWords.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Напишете функция, която приема стринг и връща броя на думите в него. 
//(Думите са разделени с произволен брой интервали, табулации и препинателни знаци)

//Вход: "Me? Why always me?, Изход: 4

unsigned countWordsInText(const char* text)
{
    if (!text)
    {
        return 0;
    }

    unsigned counter = 1; //counter must start from one because between 4 words there are 3 spaces
    while (*text)
    {
        if (*text == ' ')
        {
            counter++;
        }
        text++;
    }
    return counter;
}

int main()
{
    char text[] = "Me? Why always me?";
    cout << countWordsInText(text);
}
