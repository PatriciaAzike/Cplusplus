// Circumference and arrea of a circle with radius 2.5

#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.141593; // value of pi cannot be modified by the program
double radius = 1.5;
int main()
{
    double area, circumference;

    area = pi * pow(radius,2);
    circumference = 2*pi*radius;

    cout << "Radius:        " << radius         << endl
         << "Circumference: " << circumference  << endl
         << "Area:          " << area           << endl;

    return 0;



}