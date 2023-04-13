//
// Created by RetroHazard on 2023/04/12.
//
// https://www.learncpp.com/cpp-tutorial/chapter-11-comprehensive-quiz/
/* Objectives:
    Let’s pretend we’re writing a card game.
    a)  A deck of cards has 52 unique cards (13 card ranks of 4 suits).
        Create enumerations for the card ranks (2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace)
        and suits (clubs, diamonds, hearts, spades). Those enumerators will not be used to index arrays.

    b)  Each card will be represented by a struct named Card that contains a rank and a suit. Create the struct.

    c)  Create a printCard() function that takes a const Card reference as a parameter and prints
        the card rank and suit as a 2-letter code (e.g. the jack of spades would print as JS).

    d)  A deck of cards has 52 cards. Create an array (using std::array) to represent the deck of cards,
        and initialize it with one of each card.
        Do this in a function named createDeck and call createDeck from main.
        createDeck should return the deck to main.

    e)  Write a function named printDeck() that takes the deck as a const reference parameter and prints
        the cards in the deck. Use a range-based for-loop.
        When you can printDeck with the deck you generated in the previous task, the output should match
        what is shown on the webpage.

    f)  Write a function named shuffleDeck to shuffle the deck of cards using std::shuffle.
        Update your main function to shuffle the deck and print out the shuffled deck.

    g)  Write a function named getCardValue() that returns the value of a Card
        (e.g. a 2 is worth 2, a ten, jack, queen, or king is worth 10. Assume an Ace is worth 11).
 */
#include "cards.h"
#include <iostream>
#include <array>
#include <random>
#include <algorithm>
#include <ctime>
#include <cassert>

void printCard(const Card& card)
{
    switch (card.rank) {
        case Rank::two:
            std::cout << '2';           break;
        case Rank::three:
            std::cout << '3';           break;
        case Rank::four:
            std::cout << '4';           break;
        case Rank::five:
            std::cout << '5';           break;
        case Rank::six:
            std::cout << '6';           break;
        case Rank::seven:
            std::cout << '7';           break;
        case Rank::eight:
            std::cout << '8';           break;
        case Rank::nine:
            std::cout << '9';           break;
        case Rank::ten:
            std::cout << 'T';           break;
        case Rank::jack:
            std::cout << 'J';           break;
        case Rank::queen:
            std::cout << 'Q';           break;
        case Rank::king:
            std::cout << 'K';           break;
        case Rank::ace:
            std::cout << 'A';           break;
        default:
            std::cout << "Unknown";     break;
    }

    switch (card.suit) {
        case Suit::clubs:
            std::cout << 'C';           break;
        case Suit::diamonds:
            std::cout << 'D';           break;
        case Suit::hearts:
            std::cout << 'H';           break;
        case Suit::spades:
            std::cout << 'S';           break;
        default:
            std::cout << "Unknown";     break;
    }
}

using arrDeck = std::array<Card, 52>;
using arrIndex = arrDeck::size_type;

arrDeck createDeck()
{
    arrDeck deck {};
    arrIndex index {0};

    for (int suit{0}; suit < static_cast<int>(Suit::max_suits); ++suit)
    {
        for (int rank{0}; rank < static_cast<int>(Rank::max_ranks); ++rank)
        {
            deck[index].suit = static_cast<Suit>(suit);
            deck[index].rank = static_cast<Rank>(rank);
            ++index;
        }
    }
    return deck;
}

void printDeck(const arrDeck& deck)
{
    for (const auto& card : deck)
    {
        printCard(card);
        std::cout << ' ';
    }

    std::cout << '\n';
}

void shuffleDeck(arrDeck& deck)
{
    static std::mt19937 rng{ static_cast<std::mt19937::result_type>(std::time(nullptr)) }; // NOLINT(cert-msc51-cpp)
    std::shuffle(deck.begin(), deck.end(), rng);
}

int getCardValue(Card& card)
{
    switch (card.rank) {
        case Rank::two:         return 2;
        case Rank::three:       return 3;
        case Rank::four:        return 4;
        case Rank::five:        return 5;
        case Rank::six:         return 6;
        case Rank::seven:       return 7;
        case Rank::eight:       return 8;
        case Rank::nine:        return 9;
        case Rank::ten:         return 10;
        case Rank::jack:
        case Rank::queen:
        case Rank::king:
        case Rank::ace:         return 11;
        default:
            assert(false && "This cannot happen");
            return 0;
    }
}

int main()
{
    auto deck{ createDeck() };

    printDeck(deck);
    shuffleDeck(deck);
    printDeck(deck);

    return 0;
}