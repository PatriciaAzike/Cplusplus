// This program outputs three random numbers

#include <iostream>
#include <cstdlib>  // Prototypes of srand(), rand(), 
                    // void srand(unsigned int seed), int rand(void)

using namespace std;

int main()
{
    unsigned int seed; // irrespective of the number of times the program is run,
                      // the random numbers are the same (i.e., the do not change)
    int z1, z2, z3;

    cout << "   --- Random Numbers --- \n" << endl;
    cout << "To initialize the random number generator, "
         << "\n please enter an integer value: ";

    // srand(1); // gives the same sequene of numbers irrespective of 
              //  the number of times the program is executed

    cin >> seed;  // Input an integer

    srand(seed); // use the integer as an argument for a new sequence 
                 // of random numbers each time the program is compiled
   
    // Compute three random numbers
    z1 = rand();
    z2 = rand();
    z3 = rand();

    cout << "\n The three random numbers are: "
         << z1 << ", " << z2 << ", and " << z3 << endl;

    return 0;

}