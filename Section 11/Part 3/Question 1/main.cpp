//
// Created by RetroHazard on 2023/04/05.
//
// https://www.learncpp.com/cpp-tutorial/arrays-and-loops/
/* Objective:
 * Print the following array to the screen using a loop
 */
#include <iostream>

constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };

// Begin Answer Code
int main()
{
    for (int i = 0; i < static_cast<int>(std::size(array)) ; ++i) {
        if (array[i] <= static_cast<int>(std::size(array)))
            std::cout << array[i] << ' ';
        else
            break;
    }
//    std::cout << '\n';
    return 0;
}