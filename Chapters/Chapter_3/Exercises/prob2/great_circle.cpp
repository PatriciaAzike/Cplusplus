/* Program that accepts four floats; x1, x2, y1, and y2 The latitude and 
   longitude, in degrees  of two points on the Earth) as command line 
   arguments and writes the great circle distance between them 

 Author: Patricia Azike 
 */

#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.14159265359;
const double degree_180 = 180.0;

double rad_to_deg = degree_180 / pi;
double deg_to_rad = pi / degree_180;

double radian_to_degree(double radian);
double degree_to_radian(double degree);


int main()
{
    double x1, y1, x2, y2;                  // Latitude and longitude in degree
    double X1, Y1, X2, Y2;                  // Latitude and longitude in radians

    double d;                               // Great distance 
    string prompt("Enter x1, y1, x2, and y2 in degrees: ");
    cout << prompt << endl;
    cin >> x1 >> y1 >> x2 >> y2;

    // Convert from degree to radians
    X1 = degree_to_radian(x1); 
    Y1 = degree_to_radian(y1); 
    X2 = degree_to_radian(x2); 
    Y2 = degree_to_radian(y2);


    // Compute great distance between the two points
    d = 60 * radian_to_degree(acos(sin(X1) * sin(X2) + cos(X1) * cos(X2) * cos(Y1 - Y2)));

    cout << "\nThe great circle distance between " << x1 << ", "
         << y1 << " and " << x2 << ", " << y2 << " is " << d << endl;
   
    return 0;
}


// Function that converts from radian to degrees
double radian_to_degree(double radian)
    {
        double RD = radian * rad_to_deg;
        return RD;
    }

// Function that converts from degrees to radians
double degree_to_radian(double degree)
    {
        double DR = degree * deg_to_rad;
        return DR;
    }


