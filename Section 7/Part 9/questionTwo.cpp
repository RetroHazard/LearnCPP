//
// Created by RetroHazard on 2023/03/20.
//
// https://www.learncpp.com/cpp-tutorial/for-statements/
/* Objective:
 * Write a function named sumTo() that takes an integer parameter
 * named value, and returns the sum of all the numbers from 1 to value.
 *
 * For example, sumTo(5) should return 15, which is 1 + 2 + 3 + 4 + 5.
*/
#include <iostream>

int sumTo(int value)
{
    static int sum;
    for (int i = 1; i <= value; ++i) {
        sum += i;
    }
    return sum;
}

int main()
{
    int x;
    std::cout << "Enter an Integer: ";
    std::cin >> x;
    std::cout << sumTo(x) << '\n';

    return 0;
}