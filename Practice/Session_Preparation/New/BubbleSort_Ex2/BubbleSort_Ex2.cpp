// BubbleSort_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

//ЗАД. 1

//При въвеждане на число n и к трябва да проверим дали к се съдържа някъде в пермутациите на n.Без да използваме масиви :

//Тоест при вход 123 32 ще изкара true защото 32 ще се съдържа в пермутацията 123, извежда true
//222111 12

//5! = 5 * 4 * 3 * 2 * 1
// 10^1 = 10	
unsigned powerNumberFunction(const unsigned number, unsigned power)
{
	if (power == 0)
	{
		return 1;
	}

	return number * powerNumberFunction(number, power - 1);
}

bool checkInfix(unsigned firstNumber, unsigned secondNumber, unsigned firstNumberLength, unsigned secondNumberLength)
{
	//get rid of all the variable by doing if-else
	unsigned counter = 0;

	//for the second while
	unsigned realSecondNumberLength = secondNumberLength;
	unsigned realFirstNumberLength = firstNumberLength;
	unsigned realFirstNumber = firstNumber;
	unsigned realSecondNumber = secondNumber;

	bool result = false;

	// from tenths to units
	if (1)
	{
		//create a function to sum up
		while (firstNumberLength != 0)
		{
			if ((firstNumber % 10) == (secondNumber % 10))
			{
				counter++;
				secondNumberLength--;
				secondNumber /= 10;

				if (counter == realSecondNumberLength)
				{
					result = true;
					break;
				}

			}

			firstNumber /= 10;
			firstNumberLength--;
		}
	}
	
	

	//from units to tenths

	//1324 32
	if (!result)
	{
		counter = 0;
		unsigned powerNumber = powerNumberFunction(10, realSecondNumberLength - 1);

		while (realFirstNumberLength != 0)
		{
			if ((realFirstNumber % 10) == ((realSecondNumber / powerNumber) % 10))
			{
				counter++;
				
				if (counter == realSecondNumberLength)
				{
					result = true;
					break;
				}
				powerNumber /= 10;
			}
			
			realFirstNumber /= 10;
			realFirstNumberLength--;
		}
	}

	return result;
}

unsigned numberDigitsLength(unsigned number)
{
	unsigned counter = 1;
	while ((number / 10) != 0) 
	{
		counter++;
		number /= 10;
	}
	return counter;
}

//int main()
//{
	/*unsigned firstNumber;
	cout << "Input first number: ";
	cin >> firstNumber;

	unsigned secondNumber = 0;
	do
	{
		cout << "Input second number: ";
		cin >> secondNumber;
	} while (secondNumber == 0);
	
	unsigned firstNumberLength = numberDigitsLength(firstNumber);
	unsigned secondNumberLength = numberDigitsLength(secondNumber);

	if (checkInfix(firstNumber, secondNumber, firstNumberLength,
		numberDigitsLength(secondNumber)))
	{
		cout << "true";
	}
	else
	{
		cout << "false";
	}*/

//}

//unsigned countDigitOccurences(unsigned n, int digit)
//{
//    if (n == 0 && digit == 0)
//        return 1;
//
//    unsigned count = 0;
//    while (n != 0)
//    {
//        if (n % 10 == digit)
//            count++;
//        n /= 10;
//    }
//    return count;
//}
//bool infixOfPermutation(unsigned N, unsigned K)
//{
//    for (int i = 0; i <= 9; i++)
//    {
//        if (countDigitOccurences(N, i) < countDigitOccurences(K, i))
//        {
//            return false;
//        }
//    }
//
//    return true;
//}

int main()
{
    unsigned first = 1432;
    unsigned second = 24;
    //std::cout << infixOfPermutation(first, second);
	cout << checkInfix(first, second, numberDigitsLength(first), numberDigitsLength(second));
}
