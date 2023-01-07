// Inputs an article label and a price
#include <iostream> // Declarations of cin, cout,...
#include <iomanip> // Manipulator setw()
#include <string>
using namespace std;

int main()
{
    string Article;
    
    double price;
    double quantity;
    cout << "\nPlease enter an article label: ";
    // Input the label (15 characters maximum):
    cin >> setw(16); // or: cin.width(16);
    cin >> Article;  // Article number
    
    cin.sync(); // Clears the buffer and resets
    cin.clear(); // any error flags that may be set
    cout << "\nEnter the price of the article: ";
    cin >> price; // Input the unit price

    cout << "\nEnter the quantity of the article: ";
    cin >> quantity;
    // Controlling output:
    cout << fixed << setprecision(2) << setw(7)
    << "Article Number " << setw(7) << "Number of Pieces" << setw(7) 
    << " Price per piece \n\t\t\t\tDollar " << endl;
    cout << fixed << setprecision(2) << setw(length("Article Number "))
   << Article << setw(7) << quantity << setw(7) << price << endl;
    
    // ... The program to be continued
    return 0;
}