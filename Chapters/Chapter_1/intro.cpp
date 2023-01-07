/* A program with some functions and comments 
I am testing my skills and pushing my limits further
*/

#include <iostream>
using namespace std;

void line(), message();  // Prototypes

int main()
{
    cout << "Hello! The program starts in main()." << endl;
    line(); // this draws a line 
    message(); // this displays the message from void message
    line();
    cout << "At the end of main()." << endl;
    return 0;

}

void line() // To draw a line.
{
    cout << "--------------------------------" << endl;
}
void message() // To display a message.
{
    cout << "In function message()." << endl;
}
