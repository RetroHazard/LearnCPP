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

// write your mult function template here

int main()
{
    std::cout << mult(2, 3) << '\n';
    std::cout << mult(1.2, 3) << '\n';

    return 0;
}