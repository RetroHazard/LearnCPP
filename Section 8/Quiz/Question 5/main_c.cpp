//
// Created by RetroHazard on 2023/03/27.
//
// https://www.learncpp.com/cpp-tutorial/chapter-8-summary-and-quiz/
/* Objective:
 * Write a function template named sub that allows the user to
 * subtract two values of different types.
 * The following program should run:
 */
#include <iostream>

// write your sub function template here

int main()
{
    std::cout << sub(3, 2) << '\n';
    std::cout << sub(3.5, 2) << '\n';
    std::cout << sub(4, 1.5) << '\n';

    return 0;
}