/*
    Program that computes the sine and cosine functions 
    using their Taylor series expansion
*/

#include <iostream>
#include <cmath>
#include "factorial.h"

using namespace std;


double my_Sin(double x);
double my_Cos(double x);
double tol = 1.0e-12;

int main()
{
    double x;
    double y;
    
    
    double error_sin, error_cos;

    string prompt("Enter x: ");

    cout << prompt << endl;

    cin >> x;
    y = degree_to_radian(x);

    // Sine and error
    cout << "\nSin " << x << "°  = " << my_Sin(x) << endl;

    error_sin = abs(sin(y) - my_Sin(x));

    cout << "\nError = " << error_sin << endl; 

    // Cosine and error

    cout << "\nCos " << x << "°  = " << my_Cos(x) << endl;

    error_cos = abs(cos(y) - my_Cos(x));

    cout << "\nError = " << error_cos << endl; 

    
    return 0;



}

double my_Sin(double x)
{
    double y = degree_to_radian(x);
    double sum  = 0.0;
    int n = 0;

    while(n>=0)
        {
            sum += (((pow(-1,n) / (factorial(2*n + 1))) * pow(y, (2*n + 1))));
            if(abs(sin(y) - sum) <= tol)
                {
                    break;
                }
            n++;
            
        }
    return sum;

}

// Compute cosine
double my_Cos(double x)
{
    double y = degree_to_radian(x);
    //cout << "y " << y << " = " << y << endl;
    double sum  = 0.0;
    int n = 0;

    while(n>=0)
        {
            sum += (((pow(-1,n) / (factorial(2*n))) * pow(y, (2*n))));
            if(abs(cos(y) - sum) <= tol)
                {
                    break;
                }
            n++;
            
        }
    return sum;

}



