// HW.4_Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

//Напишете функция, която приема 6 целочислени координати(3 точки) и връща обиколката на триъгълника по тези точки.

//Вход: 1 1 4 7 0 10, Изход : 20.764

double perimeterTriangle(const double& lengthAB, const double& lengthBC, const double& lengthAC)
{
    return (lengthAB + lengthBC + lengthAC);
}

double calculateLength(const int& x1, const int& y1, const int& x2, const int& y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
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

    cout << endl;

    cout << "Input coordinates of point C(x,y) = ";
    int Cx;
    cin >> Cx;

    int Cy;
    cin >> Cy;

    double lengthAB = calculateLength(Ax, Ay, Bx, By);
    double lengthBC = calculateLength(Bx, By, Cx, Cy);
    double lengthAC = calculateLength(Ax, Ay, Cx, Cy);

    cout << "Perimeter of the triangle with points A,B,C: " << (perimeterTriangle(lengthAB, lengthBC, lengthAC));
}

