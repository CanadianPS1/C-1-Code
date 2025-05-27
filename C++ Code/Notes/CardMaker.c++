#include <iostream>
using namespace std;
class CardMaker{
    string suit;
    int number;
    string card;
    public:
    void maker(string s, int n){
        suit = s;
        number = n;
        card = getCard();
    }
    string getSuit(){
        return suit;
    }
    int getNumber(){
        return number;
    }
    void setSuit(string s){
        if(s.compare("Ace") == 1 || s.compare("Jack") == 1 || s.compare("Queen") == 1 || s.compare("King") == 1){
            suit = s;
            card = getCard();
        }else{
            cout<<"Invalid Suit";
        }
    }
    void setNumber(int n){
        if(n <= 13){
            number = n;
            card = getCard();
        }else{
            cout<<"Invalid Number";
        }
    }
    string getCard(){
        if(number == 1){
            return "Ace of " + suit;
        }else if(number == 11){
            return "Jack of " + suit;
        }else if(number == 12){
            return "Queen of " + suit;
        }else if(number == 13){
            return "King of " + suit;
        }else{
            return to_string(number) + " " + suit;
        }
        return "";
    }
};