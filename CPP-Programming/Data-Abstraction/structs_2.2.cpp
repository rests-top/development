#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>

using std::vector;
using std::string;

enum Rank {ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};
enum Suit {SPADES, HESRTS, DIAMOND, CLUBS};

struct Card{

    Rank rank;
    Suit suit;
    int num_suits = 4;
    int num_ranks = 13;

};

struct Deck {

    vector<Card> cards;
    int max_deck_size = 52;

};

void initialize(Deck&);
void print_deck(const Deck&);
void print_card(const Card&);
void shuffle(Deck&);


int main()
{

    Deck my_deck;
    initialize(my_deck);
    print_deck(my_deck);
    shuffle(my_deck);
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

void shuffle(Deck& deck)
{
	Deck shuffled;
	while (!deck.cards.empty())
	{
		size_t rand_index = rand() % deck.cards.size();
		shuffled.cards.push_back(deck.cards[rand_index]);
		deck.cards.erase(deck.cards.begin() + rand_index);
	}

	deck = shuffled;
}
