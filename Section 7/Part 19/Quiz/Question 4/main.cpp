//
// Created by RetroHazard on 2023/03/22.
//
// https://www.learncpp.com/cpp-tutorial/chapter-7-comprehensive-quiz/
/* Objective:
 * Update your previous solution to handle invalid guesses (e.g. ‘x’),
 * out of bounds guesses (e.g. 0 or 101), or valid guesses that
 * have extraneous characters (e.g. 43x).
*/
#include <iostream>
#include <random>

int rollForNum(int low, int high)
{
    // Initialize PRNG
    std::random_device getSeed;
    std::seed_seq initSeed{getSeed(), getSeed(), getSeed(), getSeed(), getSeed(), getSeed(), getSeed(), getSeed()};
    std::mt19937 mt{initSeed};

    // Set Number
    std::uniform_int_distribution<> selectNum(low,high);
    return selectNum(mt);
}

bool playerHasTurns(int playerTurn, int maxTurns)
{
    while (playerTurn <= maxTurns)
        return true;
}

bool playRematch() {
    while (true) {
        char playerResponse {};
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> playerResponse;
        switch (playerResponse) {
            case 'y':
                return true;
            case 'n':
                return false;
        }
    }
}

int playerGuess(int turnNum, int low, int high)
{
    int guessNum;
    bool validNum {false};
    while (validNum == false){
        std::cout << "Guess #" << turnNum << ": ";
        std::cin >> guessNum;
        if ((guessNum > high) || (guessNum < low)) {
            std::cout << "Sorry, this number is not valid for this session, try again.\n";
        }
        else
            validNum = true;
    }
    return guessNum;
}

void playGame() {
    constexpr int lowRange{1};
    constexpr int highRange{100};
    int winningNum{rollForNum(lowRange, highRange)};

    int guessNum;
    int playerTurn{1};
    constexpr int maxTurns{7};
    std::cout << "======================\n";
    std::cout << "Let's play a game.\n";
    std::cout << "I'm thinking of a number between " << lowRange << " and " << highRange << ".\n";
    std::cout << "You have " << maxTurns << " tries to guess what it is.\n";

    while (playerHasTurns(playerTurn, maxTurns)) {
        for (; playerTurn <= maxTurns; playerTurn++) {
            guessNum = playerGuess(playerTurn, lowRange, highRange);
            if (guessNum == winningNum) {
                std::cout << "Correct! You Win!\n";
                return;
            } else if (guessNum < winningNum) {
                std::cout << "Your guess is too low.\n";
            } else if (guessNum > winningNum) {
                std::cout << "Your guess is too high.\n";
            }
        }
        if (playerTurn > 7) {
            std::cout << "Sorry, you lose. The correct number was " << winningNum << ".\n";
            return;
        }
    }
}

int main()
{
    do {
        playGame();
    }
    while (playRematch());

    return 0;
}