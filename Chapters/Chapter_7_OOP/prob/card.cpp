// Card class

#include <iostream>
#include <string>
#include <vector>
#include <assert.h>

using namespace std;

enum Suit {CLUBS, DIAMONDS, HEARTS, SPADES};      // Suit type
enum Rank {ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};  // Rank type


class Card{

public:
    int rank;
    Suit suit;
    string shortstring;

    Card(){};     // default constructor
    Card(string ishortstring){
        shortstring = ishortstring;
    }
    Card(int r, Suit s){
        rank = r;
        suit = s;
    }

    int getRank(){
        return rank;
    }

    Suit getSuit(){
        return suit;
    }

    string setRank(){
        switch(rank){
            case ACE:
                return "A";
            case TWO:
                return "2";
            case THREE:    
                return "3";
            case FOUR:     
                return "4";
            case FIVE:     
                return "5";
            case SIX:      
                return "6";
            case SEVEN:    
                return "7";
            case EIGHT:    
                return "8";
            case NINE:     
                return "9";
            case TEN:      
                return "10";
            case JACK:
                return "J";
            case QUEEN:    
                return "Q";
            case KING:     
                return "K";
            default:
                assert(!"The default case of the rank switch was reached");
        }
    }
    string setSuit(){
        switch(suit){
            case CLUBS:
                return "C";
            case DIAMONDS:
                return "D";
            case HEARTS:    
                return "H";
            case SPADES:     
                return "S";
            default:
                assert(!"The default case of the suit switch was reached");
        }
    }

    void tostring(){
        cout << setRank() + setSuit() <<'\t'; 

    }


};

Suit operator++(Suit& s, int){
    s = Suit(s+1);
    return s;
}

int main() {
    for (Suit suit = CLUBS; suit <= SPADES; suit++){
        for (int rank = ACE; rank <= KING; rank++){
            Card c(rank,suit);
            c.tostring();
        }
        cout << endl;
    }
    return 0;
}
