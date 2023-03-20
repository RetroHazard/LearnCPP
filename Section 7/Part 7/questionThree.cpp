//
// Created by RetroHazard on 2023/03/20.
//
//https://www.learncpp.com/cpp-tutorial/introduction-to-loops-and-while-statements/
/* Objective:
 * Invert the nested loops example so it prints the following:
 * 5 4 3 2 1
 * 4 3 2 1
 * 3 2 1
 * 2 1
 * 1
 */

#include <iostream>

int main()
{
    // outer loops between 1 and 5
    int outer{ 1 };
    while (outer <= 5)
    {
        // For each iteration of the outer loop, the code in the body of the loop executes once

        // inner loops between 1 and outer
        int inner{ 5 };
        while (inner >= outer)
        {
            std::cout << inner << ' ';
            --inner;
        }

        // print a newline at the end of each row
        std::cout << '\n';
        ++outer;
    }

    return 0;
}