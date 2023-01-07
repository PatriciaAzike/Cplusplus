/*
    Program that computes the sine and cosine functions 
    using their Taylor series expansion
*/

#include <iostream>
#include <cmath>
#include "factorial.h"

using namespace std;


int main()
{
    double x, y;
    int n;
    double sum, error;
    double tol = 1.0e-6;

    string prompt("Enter x");

    cout << prompt << endl;

    cin >> x;

    y = degree_to_radian(x);
    sum  = 0.0;
    n = 0;

    while(n>=0)
        {
            sum += (((pow(-1,n) / (factorial(2*n + 1))) * pow(y, (2*n + 1))));
            if(abs(sin(y) - sum) <= tol)
                {
                    break;
                }
            n++;
            
        }
    cout << "\nSin " << x << " = " << sum << endl;
    cout << "Error = " << abs(sin(y) - sum) << endl; 

    //cout << "\ny = " << sin(y) << endl;

    return 0;



}

