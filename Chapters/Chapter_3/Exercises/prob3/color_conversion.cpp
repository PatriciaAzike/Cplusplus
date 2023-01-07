/* 
    Program than converts the primary form of LCD displays also known as
    the RGB format to the primary format of publishing books known as
    the CMYK format

    Author: Patricia
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    double r, g, b;
    double c, m, y, k;
    double w;

    string prompt("Enter the levels of r, g, and b: ");
    cout << prompt<< endl;

    cin >> r >> g >> b;

    // if the values entered are zeros, the CMY values are 0, while the K value is 1
    if(r==0 && g==0 && b==0)
        {
            c = m = y = 0;
            k = 1;
            cout << "\nc = " << c << endl;
            cout << "\nm = " << m << endl;
            cout << "\ny = " << y << endl;
            cout << "\nk = " << k << endl;
            
        }
        
       // otherwise use the formula below 
    else 
        {
           w = max({r/255, g/255, b/255});
           c = (w - (r/255))/w;
           m = (w - (g/255))/w;
           y = (w - (b/255))/w;
           k = 1 - w;
           cout << "\nc = " << c << endl;
           cout << "\nm = " << m << endl;
           cout << "\ny = " << y << endl;
           cout << "\nk = " << k << endl;
           
        }
    return 0;
}