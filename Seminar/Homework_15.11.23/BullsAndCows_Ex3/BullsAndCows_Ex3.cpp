// BullsAndCows_Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//bool arrayCompare(unsigned int arrayA[], unsigned int arrayB[], size_t lenA, size_t lenB) //array1 = arrayA, array2 = arrayB
//{
//	bool result = false;
//
//	//unsigned int arrayASize = (sizeof(arrayA) / sizeof(unsigned int)); //the return value is 2, instead of 5 and 3
//	//unsigned int arrayBSize = (sizeof(arrayB) / sizeof(unsigned int)); 
//
//	int aIdx = 0;
//	int bIdx = 0;
//
//	// A = [1, 2, 5, 4, 2]
//
//	// B = [1, 5, 2]
//
//	for (int i = 0; i < lenA; i++)
//	{
//		if (arrayA[aIdx] == arrayB[bIdx])
//		{
//			aIdx++;
//			bIdx++;
//		}
//		else
//		{
//			aIdx++;
//		}
//
//		if (bIdx >= lenB)
//		{
//			result = true;
//			break;
//		}
//	}
//
//	return result;
//}

int main()
{
	int num1 = 5;
	int num2 = 13;
	num2 = num1++ + 12;
	
	cout << num2;
	cout << num1;
}


//int main()
//{
//	unsigned int array1[] = {1,2,4,2,3};
//	unsigned int array2[] = {2,2,4};
//
//	cout << (arrayCompare(&array1[2], array2, 5, 3));
//}
//void numberBullsAndCows(unsigned int numberRequests, int array[])
//{
//    unsigned int number = 0;
//    unsigned int numberBulls = 0;
//    unsigned int numberCows = 0;
//
//    for (int i = 0; i < numberRequests; i++)
//    {
//        
//    }
//}
//
//void creatingArrays(unsigned int numberRequests)
//{
//    for (int i = 0; i < numberRequests; i++)
//    {
//        int array[1024];
//        cin >> array[i];
//        numberBullsAndCows(numberRequests, array);
//    }
//
//    
//}
//
//int main()
//{
//    unsigned int digitNumberCount;
//    cout << "Input length of the number: ";
//    cin >> digitNumberCount;
//
//    unsigned int numberRequests;
//    cout << "Input number of requests";
//    cin >> numberRequests;
//
//    inputBullsAndCows(numberRequests);
//
//}