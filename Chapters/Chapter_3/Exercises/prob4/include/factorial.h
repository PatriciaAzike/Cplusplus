/*  Header file that converts from radians to degrees, degrees to radians, 
    and also computes factorial
 
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
int factorial(int n);


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


// Computes  the factorial of a number
int factorial(int n)
{
    long fact = 1;
    
    int i;

    if(n==0)
        {
            return 1;
        }
    
    else
        {
            for(i=1; i<=n; ++i){
                fact *= i;
            

            }
            return fact;

        }
}


