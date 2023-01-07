// Number game with the computer

/* 
    The computer stores a random number between 1 and 15 and the player
(user) attempts to guess it.The player has a total of three attempts.After each
wrong guess, the computer tells the user if the number was too high or too low.
If the third attempt is also wrong, the number is output on screen.
The player wins if he or she can guess the number within three attempts.
The player is allowed to repeat the game as often as he or she wants
*/

// Author: Patricia

#include <cstdlib> // Prototypes of srand() and rand()
#include <iostream>
#include <string> 
#include <iomanip>


#include <ctime> // Prototype of time()



using namespace std;
int main()
{
    
    srand((unsigned) time(0)); // use it to initialize the random numbers
    int guess, tries;
    int Random_num = (rand() % 15) + 1;
    cout << "\nMake an integer guess between "<< 1 << " and " << 15 << endl;
    cin >> guess;


    tries = 1;

    if ((guess < 1) | (guess > 15))
        {
            cout << "Guess must be between 1 and 15." << endl;
            exit;
        }

    else
        {
            while(tries<3)

            {
                if (guess < Random_num)
                    {
                        cout << setw(3) << "\nGuess too low " << endl;
                        cout << "\nTry again" << endl;
                        cin >> guess;
                        
                    }

                else if (guess > Random_num)
                    {
                        cout << setw(3) << "\nGuess too high " << endl;
                        cout << "\nTry again" << endl;
                        cin >> guess;
                    
                    }

                else
                    {
                        
                        cout << setw(3) << "\nYou guessed correctly " << endl;
                        break;
                    }

                tries++;

                
            }
        }
    
        // }

        
    
    return 0;
}