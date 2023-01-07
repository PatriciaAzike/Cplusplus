// C++ program that outputs the multiplication table

#include <iostream>
#include <iomanip>

using namespace std; 

int main()
{
    string line(60, '-');
    int x[]={1,2,3,4,5,6,7,8,9,10};
    int X;

    cout << setw(20) << "******"
         << " MULTIPLICATION TABLE " << "******" << setw(20) << endl << endl
         << fixed << setprecision(2) << setw(11) << x[0] << setw(5) 
         << x[1]<< setw(5) << x[2] << setw(5) << x[3] << setw(5) 
         << x[4]<< setw(5) << x[5]<< setw(5) << x[6]<< setw(5) 
         << x[7]<< setw(5) << x[8]<< setw(5) << x[9]<< endl;

    cout << line << endl;
   

        for (int j=1; j<=10; ++j)
            {
                cout << setw(5) << j <<"|";
            for (int k=1; k<=10; ++k)
                {

                   cout << setw(5) << j*k; 
                    
                }
                cout << endl;
            }
    
        

    return 0;
}