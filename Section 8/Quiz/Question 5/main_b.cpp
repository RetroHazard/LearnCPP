//
// Created by RetroHazard on 2023/03/27.
//
// https://www.learncpp.com/cpp-tutorial/chapter-8-summary-and-quiz/
/* Objective:
 * Write a function template named mult that allows the user to
 * multiply one value of any type (first parameter) and an
 * integer (second parameter).
 * The function should return the same type as the first parameter.
 * The following program should run:
 */
#include <iostream>

// write your add function template here

int main()
{
    std::cout << add(2, 3) << '\n';
    std::cout << add(1.2, 3.4) << '\n';

    return 0;
}