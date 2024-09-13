// lcm_Array_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//EX 2 - needs a bit more touching, i will try finding it by lcm(a,b) = |a*b|/gcd(a,b)

#include <iostream>
using namespace std;

//needds fixing
int leastCommonMultipleOfArr(const int element, int lcm_Candidate)
{
    int lcm_First = lcm_Candidate;

    if ((lcm_Candidate % element) != 0)
    {
        lcm_Candidate++;

        while ((lcm_Candidate % element) != 0 && (lcm_Candidate % lcm_First) != 0)
        {
            lcm_Candidate++;
        }
        return lcm_Candidate;
    }
    else
    {
        while ((lcm_Candidate % element) != 0)
        {
            lcm_Candidate++;
        }
        return lcm_Candidate;
    }
    
}

int findBiggestNumber(const int array[], const unsigned length)
{
    int lcm_Candidate = array[length - 1];
    for (unsigned i = 0; i < length; i++)
    {
        if (array[i] > lcm_Candidate)
        {
            lcm_Candidate = array[i];
        }
    }

    for (unsigned i = 0; i < length; i++)
    {
        lcm_Candidate = leastCommonMultipleOfArr(array[i], lcm_Candidate);
    }

    return lcm_Candidate;
}

//filling array
void fillArray(int array[], const unsigned int size)
{
    cout << "Input values of the array:" << endl;
    for (unsigned i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int main()
{
    constexpr unsigned max_Size = 1024;
    cout << "Input size of the array: ";
    unsigned int size = 0;
    cin >> size;
    int array[max_Size];
    fillArray(array, size);
    int result = findBiggestNumber(array, size);
    cout << result;
}

