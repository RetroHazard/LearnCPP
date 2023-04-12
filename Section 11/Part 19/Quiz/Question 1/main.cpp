//
// Created by RetroHazard on 2023/04/12.
//
// https://www.learncpp.com/cpp-tutorial/chapter-11-comprehensive-quiz/
/* Objective:
 *  Pretend you’re writing a game where the player can hold 3 types of items:
 *  health potions, torches, and arrows.
 *
 *  Create an enum to identify the different types of items, and an std::array to
 *  store the number of each item the player is carrying
 *  (the enumerators are used as indexes of the array).
 *
 *  The player should start with 2 health potions, 5 torches, and 10 arrows.
 *  Write a function called countTotalItems() that returns how many items the player has in total.
 *  Have your main() function print the output of countTotalItems() as well as the number of torches.
 */
#include <iostream>
#include <array>
#include <numeric>

enum itemType
{
    health_potion,
    torch,
    arrow,
    maxItems
};

using playerInventory = std::array<int, itemType::maxItems>;
// Wouldn't it be better to use a struct for this?

int countTotalItems(const playerInventory& items)
{
    return std::reduce(items.begin(),items.end());
};

int main()
{
    playerInventory items { 2, 5, 10 };

    std::cout << "The player has " << countTotalItems(items) << " total items.\n";
    std::cout << "The player has " << items[itemType::torch] << " torches.\n";

    return 0;
}