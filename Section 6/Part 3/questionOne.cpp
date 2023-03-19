//
// Created by RetroHazard on 3/18/23.
//
// https://www.learncpp.com/cpp-tutorial/local-variables/
//
/* Objective:
 * Write a program that asks the user to enter two integers,
 * one named smaller, the other named larger.
 * If the user enters a smaller value for the second integer,
 * use a block and a temporary variable to swap the smaller and larger values.
 * Then print the values of the smaller and larger variables.
 * Add comments to your code indicating where each variable dies.
 *
 * Note: When you print the values, smaller should hold the smaller input and
 * larger the larger input, no matter which order they were entered in.
 *
 */
#include <iostream>

int main()
{
    int smaller{};                                              // smaller initialized
    std::cout << "Enter an integer: ";
    std::cin >> smaller;
    int larger{};                                               // larger initialized
    std::cout << "Enter a larger integer: ";
    std::cin >> larger;
    if (smaller > larger) {
        std::cout << "Swapping the values\n";
        int smallerTemp;                                        // smallerTemp initialized
        int largerTemp;                                         // largerTemp initialized
        smallerTemp = smaller;
        largerTemp = larger;
        larger = smallerTemp;
        smaller = largerTemp;
    }                                                           // smallerTemp and largerTemp are destroyed
    std::cout << "The smaller value is " << smaller << '\n';
    std::cout << "The larger value is " << larger << '\n';

    return 0;
}                                                               // smaller and larger are destroyed