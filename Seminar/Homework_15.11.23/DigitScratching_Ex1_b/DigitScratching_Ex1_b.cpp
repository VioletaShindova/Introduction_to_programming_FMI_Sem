// DigitScratching_Ex1_b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void fillingArray(int arr[], size_t length)
{

    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    return;
}

bool arrayCompare(int firstArray[], int secondArray[], size_t firstLength, size_t secondLength)
{
    int result = 0;
    int firstSize = firstLength - 1;
    int secondSize = secondLength;
    int index = 0;
    int counter = 0;

    for (int i = 0; i < secondLength; i++) 
    {
        while (i < firstLength)
        {
            int value2 = counter + 1;
            int firstValue = firstArray[index]; 

            if (secondArray[i] == firstArray[index])
            {
                if (firstValue == secondArray[value2])
                {
                    return 0;
                }
                else
                {
                    result = 1;
                    counter++;
                    index = 0;
                    break;
                }
            }
            else if (firstArray[index] == secondArray[value2])
            {
                return 0;
            }
            else
            {
                index++;
                continue;
            }
        }
    }

    return result;
}

int main()
{
    int firstArray[1024];
    int firstLength = 0;
    cout << "Input length of the first array: ";
    cin >> firstLength;
    fillingArray(firstArray, firstLength);

    int secondArray[1024];
    int secondLength;
    cout << "Input length of the second array: ";
    cin >> secondLength;
    fillingArray(secondArray, secondLength);

    bool result = 0;

    if (firstLength >= secondLength)
    {
        result = arrayCompare(firstArray, secondArray, firstLength, secondLength);
    }
    else
    {
        result = arrayCompare(secondArray, firstArray, secondLength, firstLength);
    }

    if (result)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}