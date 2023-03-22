//
// Created by RetroHazard on 2023/03/21.
//
// https://www.learncpp.com/cpp-tutorial/chapter-7-comprehensive-quiz/
/* Objective:
 * mplement a game of hi-lo. First, your program should pick a random
 * integer between 1 and 100. The user is given 7 tries to guess the
 * number.
 *
 * If the user does not guess the correct number, the program should
 * tell them whether they guessed too high or too low.
 * If the user guesses the right number, the program should tell
 * them they won. If they run out of guesses, the program should
 * tell them they lost, and what the correct number is.
 * At the end of the game, the user should be asked if they want
 * to play again. If the user doesn’t enter ‘y’ or ‘n’, ask them again.
 *
 * For this quiz, assume the user enters a valid number.
 * Use a Mersenne Twister PRNG, and seed it using a std::seed_seq
 * with 8 results from std::random_device.
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

void playGame() {
    int lowRange{1};
    int highRange{100};
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
            std::cout << "Guess #" << playerTurn << ": ";
            std::cin >> guessNum;
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