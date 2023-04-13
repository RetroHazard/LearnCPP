//
// Created by RetroHazard on 2023/04/12.
//
// https://www.learncpp.com/cpp-tutorial/chapter-11-comprehensive-quiz/
/* Objective:
 *  Let’s write a simplified version of Blackjack. If you’re not already familiar with Blackjack,
 *  the Wikipedia article for Blackjack has a summary.
 *
 *  Here are the rules for our version of Blackjack:
 *      The dealer gets one card to start (in real life, the dealer gets two, but one is face down so it doesn’t matter at this point).
 *      The player gets two cards to start.
 *      The player goes first.
 *      A player can repeatedly “hit” or “stand”.
 *      If the player “stands”, their turn is over, and their score is calculated based on the cards they have been dealt.
 *      If the player “hits”, they get another card and the value of that card is added to their total score.
 *      An ace normally counts as a 1 or an 11 (whichever is better for the total score). For simplicity, we’ll count it as an 11 here.
 *      If the player goes over a score of 21, they bust and lose immediately.
 *      The dealer goes after the player.
 *      The dealer repeatedly draws until they reach a score of 17 or more, at which point they stand.
 *      If the dealer goes over a score of 21, they bust and the player wins immediately.
 *      Otherwise, if the player has a higher score than the dealer, the player wins. Otherwise, the player loses (we’ll consider ties as dealer wins for simplicity).
 *
 *  In our simplified version of Blackjack, we’re not going to keep track of which specific cards the player
 *  and the dealer have been dealt. We’ll only track the sum of the values of the cards they have been dealt
 *  for the player and dealer. This keeps things simpler.
 *
 *  Start with the code you wrote in quiz #6. Create a function named playBlackjack(). This function should:
 *      Accept a shuffled deck of cards as a parameter.
 *      Implement Blackjack as defined above (note: you can define other functions to help with this).
 *      Returns true if the player won, and false if they lost.
 *
 *  Also write a main() function to play a single game of Blackjack.
 */
#include "../Question 6/cards.h"
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