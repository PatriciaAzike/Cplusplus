 /* Program that accepts three floats x, y, and z as command
 line arguments and writes True if the values are strictly 
 ascending or descending

 Name: Patricia Azike
 */

#include <iostream>

using namespace std;

int main()
{
    double x, y, z;

    string prompt("Enter x, y, and z: ");
    cout << prompt;                                 // Request for input

    cin >> x >> y >> z;

    //cout << "x = " << x << endl;
    if((x<y && y<z) | (x>y && y>z))
    {
        //return true;
        cout << "True" << endl;

    }

    else
    {
        //return false;
        cout << "False" << endl;
    }

    return 0;
}
