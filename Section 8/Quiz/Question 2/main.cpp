//
// Created by RetroHazard on 2023/03/27.
//
// https://www.learncpp.com/cpp-tutorial/chapter-8-summary-and-quiz/
/* Objective:
 * Upgrade the following program using type aliases
 */
#include <iostream>

namespace constants
{
    inline constexpr double pi { 3.14159 };
}

using Degs = double;
using Rads = double;

Rads convertToRadians(Degs degrees)
{
    return degrees * constants::pi / 180;
}

int main()
{
    std::cout << "Enter a number of degrees: ";
    Degs degrees{};
    std::cin >> degrees;

    Rads radians { convertToRadians(degrees) };
    std::cout << degrees << " degrees is " << radians << " radians.\n";

    return 0;
}