// random.cpp
// Outputs 20 random numbers from 1 to 100.

#include <stdlib.h> // Prototypes of srand() and rand()
#include <iostream>
#include <string>
#include <climits> 
#include <iomanip>


using namespace std;
int main()
{
    unsigned int i, seed;
    string line(6, '*');
    
    cout << "\nPlease type an integer between "<< 0 << " and " << 65535 << endl;
    
    cin >> seed; // Reads an integer.
    srand( seed); // Seeds the random
    // number generator.

    if ((seed<0) | (seed>65535))
        {
            cout << "Number must be between 0 and 65535" << endl;
            exit;
            
            
        }
    
    else
        {
            cout << setw(40) << line << " RANDOM NUMBERS " << line << setw(40) 
                 << endl << endl;
            for( i = 1 ; i <= 20 ; ++i)
                {
                    cout << setw(20) << i << ". random number = "
                    << setw(3) << (rand() % 100 + 1) << endl;
                }
        }
        
    
    return 0;
}