//
// Created by RetroHazard on 3/16/23.
//
// https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz/
/*
 * Objective:
 * Find 3 issues (affecting 4 lines) in the following code.
 */

#include <cstdint> // Issue: Unused
#include <iostream>

int main()
{
//    std::cout << "How old are you?\n"; // Issue: Remain on the line during input
    std::cout << "How old are you? ";
//    std::uint8_t age{}; // Issue: this should be a regular int
    int age{ };
    constexpr int legalAge{ 16 };
    std::cin >> age;

    std::cout << "Allowed to drive a car in Texas [";

//    if (age >= 16) // Issue: should use const instead - Added on Line 19
    if (age >= legalAge)
//        std::cout << "x"; // Issue: single characters should have single quotations
        std::cout << 'x';
    else
        std::cout << ' ';
//        std::cout << " "; // Issue: single characters should have single quotations

    std::cout << "]\n";

    return 0;
}