// Sem.04_Ex9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете функция, която приема 4 цели числа - a, b, c, d и връща дали точката <a, b> и точката <c, d> 
//лежат на една окръжност с център <0, 0>.
//Вход: 1 0 0 1 Изход : true

bool checkRadiuses(const unsigned& radiusOA, const unsigned& radiusOB)
{
    return (radiusOA == radiusOB);
}

unsigned calculateRadius(const int& coordinateX, const int& coordinateY)
{
    return sqrt((coordinateX * coordinateX) + (coordinateY * coordinateY));
}

int main()
{
    cout << "Input coordinates of point A(x,y) = ";
    int Ax;
    cin >> Ax;

    int Ay;
    cin >> Ay;

    cout << endl;

    cout << "Input coordinates of point B(x,y) = ";
    int Bx;
    cin >> Bx;

    int By;
    cin >> By;

    unsigned radiusOA = calculateRadius(Ax, Ay);
    unsigned radiusOB = calculateRadius(Bx, By);

    if (checkRadiuses(radiusOA, radiusOB))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}

