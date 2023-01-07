// Inputs an article label and a price
#include <iostream> // Declarations of cin, cout,...
#include <iomanip> // Manipulator setw()
#include <string>
using namespace std;

int main()
{
    string label;
    double price;
    double quantity;
    cout << "\nPlease enter an article label: ";
    // Input the label (15 characters maximum):
    cin >> setw(16); // or: cin.width(16);
    cin >> label;
    cin.sync(); // Clears the buffer and resets
    cin.clear(); // any error flags that may be set
    cout << "\nEnter the price of the article: ";
    cin >> price; // Input the price

    cout << "\nEnter the quantity of the article: ";
    cin >> quantity;
    // Controlling output:
    cout << fixed << setprecision(2) << setw(5)
    << "\nArticle" << endl
    << setw(5) << "Label " << setw(5) << "Price" << setw(5) << " Quantity " << endl;
    cout << fixed << setprecision(2) << setw(5)
    << label << setw(5) << price << setw(6) << quantity << endl;
    cout << fixed << setprecision(2) << setw(5)
    << label << setw(5) << price << setw(6) << quantity << endl;
    // ... The program to be continued
    return 0;
}