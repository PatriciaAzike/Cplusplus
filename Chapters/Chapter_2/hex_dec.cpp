// To display hexadecimal integer literals and
// decimal integer literals.

#include <iostream>
using namespace std;

int main()
{
    // cout outputs integers as decimal integers:
    cout << "Value of 0xFF = " << 0xFF << " decimal" << endl;

    // The manipulator hex changes output to hexadecimal
    cout << "Value of 27 = " << hex << 27 << " hexadecimal" << endl;

    // The manipulator dec changes output to decimal
    cout << "Value of 0x2a = " << dec << 0x2a << " decimal" << endl;
    return 0;
}