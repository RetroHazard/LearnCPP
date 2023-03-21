//
// Created by RetroHazard on 2023/03/21.
//
// https://www.learncpp.com/cpp-tutorial/chapter-7-comprehensive-quiz/
/* Objective:
 * In the chapter 4 comprehensive quiz, we wrote a program to simulate
 * a ball falling off of a tower.
 * Because we didnt have loops yet, the ball could only fall
 * for 5 seconds.
 *
 * Take the program below and modify it so that the ball falls
 * for as many seconds as needed until it reaches the ground.
*/
#include <iostream>
#include "constants.h"

double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen { myConstants::gravity * seconds * seconds / 2 };
    double heightNow { initialHeight - distanceFallen };

    // Check whether we've gone under the ground
    // If so, set the height to ground-level
    if (heightNow < 0.0)
        return 0.0;
    else
        return heightNow;
}

void calculateAndPrintHeight(double initialHeight, int time)
{
    std::cout << "At " << time << " seconds, the ball is at height: " << calculateHeight(initialHeight, time) << '\n';
}

int main()
{
    std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight {};
    std::cin >> initialHeight;

    for (int time = 0; calculateHeight(initialHeight, time) >= 0 ; time++) {
        if (calculateHeight(initialHeight,time) <= 0) {
            std::cout << "At " << time << " seconds, the ball is on the ground\n";
            break;
        }
        else
            calculateAndPrintHeight(initialHeight, time);
    }
    return 0;
}