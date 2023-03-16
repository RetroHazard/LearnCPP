//
// Created by RetroHazard on 3/16/23.
//
// https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz/
/*
 * Objective:
 * Write a short program to simulate a ball being dropped off of a tower.
 * To start, the user should be asked for the height of the tower in meters.
 * Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity
 * (the ball is not moving to start).
 * Have the program output the height of the ball above the
 * ground after 0, 1, 2, 3, 4, and 5 seconds.
 * The ball should not go underneath the ground (height 0).
 *
 * Use a function to calculate the height of the ball after x seconds.
 * The function can calculate how far the ball has fallen after x seconds
 * using the following formula:
 *          distance fallen = gravity_constant * x_seconds2 / 2
 */

#include <iostream>
#include <cmath>

int towerHeight()
{
    int x{ };
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> x;
    return x;
}

double calcDistance(int time)
{
    constexpr double gravity{9.8};
    double distance { gravity * pow(time,2) / 2 };
    return distance;
}

int main()
{
    int startHeight { towerHeight() };
    double currentHeight { };
    int time { 0 };
    while (time < 6) {
        currentHeight = startHeight - calcDistance(time);
        if (currentHeight > 0.0)
            std::cout << "At " << time << " seconds, the ball is at height: " << currentHeight << " meters\n";
        else
            std::cout << "At " << time << " seconds, the ball is on the ground.\n";
        time++;
    }
    return 0;
}