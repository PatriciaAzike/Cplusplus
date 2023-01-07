// Tryying out escape sequences

#include <iostream>
using namespace std;

int main()
{
    cout << "\nThis is\t a string\n\t\t" 
            " with \"many\" escape sequences!\n";

    cout << "I am a very, very\
            long string" << endl;  // the space will be evaluated

    cout << "I am a very, very"
            " long string";
    return 0;
}