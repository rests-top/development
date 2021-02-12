#include<iostream>
#include<vector>
using std::vector;
using std::string;

enum Rank {ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
enum Suit {SPADES, HEARTS, DIAMOND, CLUBS};

struct Card{

    Rank rank;
    Suit suit;
    int num_suits = 4;
    int num_ranks = 13;

};

struct Deck {

    vector<Card> cards;
    string card_back;
    int max_deck_size = 52;

};

void initialize(Deck&);
void print_deck(const Deck&);
void print_card(const Card&);


int main()
{

    Deck my_deck;
    initialize(my_deck);
    print_deck(my_deck);
};

void initialize(Deck& deck)
{
    Card card;
    for (int suit = 0; suit < card.num_suits; suit++)
    {
        for (int rank = 0; rank < card.num_ranks; rank++)
        {
            card.suit = Suit(suit);
            card.rank = Rank(rank);
            deck.cards.push_back(card);
        };
    };
};

void print_deck(const Deck& deck)
{
    for (Card c : deck.cards)
    {
        print_card(c);
    }
};

void print_card(const Card& card)
{
    std::cout << "Rank = " << card.rank << "   "
        << "Suit = " << card.suit << '\n';
};
