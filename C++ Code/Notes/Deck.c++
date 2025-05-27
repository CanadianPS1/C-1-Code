#include <iostream>
#include <algorithm>
#include <list>
#include "CardMaker.c++"
using namespace std;
class Deck{
    public:
    list<CardMaker> deckMaker(){
        list<CardMaker>cards;
        CardMaker card;
        for(int i = 1; i < 14; i++){
            card.maker("Hearts", i);
            cards.push_back(card);
            card.maker("Diamonds", i);
            cards.push_back(card);
            card.maker("Clubs", i);
            cards.push_back(card);
            card.maker("Spades", i);
            cards.push_back(card);
        }
        return cards;
    }
};
int main(){
    Deck deck;
    list<CardMaker>cards = deck.deckMaker();
    for(CardMaker card : cards){
        cout<<card.getCard()<<endl;
    }
    return 0;
}