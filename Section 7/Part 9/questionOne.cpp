//
// Created by RetroHazard on 2023/03/20.
//
// https://www.learncpp.com/cpp-tutorial/for-statements/
/*
 * Objective:
 * Write a for loop that prints every even number from 0 to 20.
 */
#include <iostream>

int main()
{
    for (int i = 0; i <= 20; ++i) {
        if ((i % 2) == 0)
        std::cout << i << ' ';
    }
    return 0;
}