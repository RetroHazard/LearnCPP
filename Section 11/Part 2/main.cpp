//
// Created by RetroHazard on 2023/04/05.
//
// https://www.learncpp.com/cpp-tutorial/arrays-part-ii/
/* Objective:
 * Declare an array to hold the high temperature (to the nearest
 * tenth of a degree) for each day of a year (assume 365 days in a year).
 * Initialize the array with a value of 0.0 for each day.
 *
 * Set up an enum with the names of the following animals:
 * chicken, dog, cat, elephant, duck, and snake.
 * Put the enum in a namespace.
 * Define an array with an element for each of these animals, and
 * use an initializer list to initialize each element to hold the
 * number of legs that animal has.
 *
 * Write a main function that prints the number of legs an
 * elephant has, using the enumerator.
 */
#include <iostream>

double high_temp[365]{0.0};

namespace Creatures
{
    enum E_Animals
    {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
    };

    int num_legs[6]
    {
        2,
        4,
        4,
        4,
        2,
        0,
    };
}

int main()
{

    std::cout << "An Elephant has " <<
    Creatures::num_legs[Creatures::E_Animals::elephant]
    << " legs.\n";

    return 0;
}