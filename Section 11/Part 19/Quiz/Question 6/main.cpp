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