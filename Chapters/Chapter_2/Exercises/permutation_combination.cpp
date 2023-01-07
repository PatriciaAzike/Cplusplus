// Computes the factorial, permutation, and combination of a number

#include <iostream>
using namespace std;


int factorial(int n);
int permutation(int n, int k);
int combination(int n, int k);


int main(){
    int n = 5;
	int k = 2;

    cout << "5! =       " << factorial(n) << endl;
    cout << "P(5,2) =   " << permutation(n, k) << endl;
    cout << "C(5,2) =   " << combination(n, k) << endl;
    return 0;
}

// Function that computes the permutation of a number using the output of the factorial
int permutation(int n, int k)
{
    int P = 1;

    P *= factorial(n)/factorial(n-k);
    return P;
}


// Function that computes the combination of a number using the output of the factorial

int combination(int n, int k)
{
    int C = 1;
    C *= factorial(n)/(factorial(n-k) * factorial(k));
    return C;
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