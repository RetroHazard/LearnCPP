//
// Created by RetroHazard on 2023/04/10.
//
// https://www.learncpp.com/cpp-tutorial/dynamically-allocating-arrays/
/* Objective:
 * Write a program that:
 *      Asks the user how many names they wish to enter.
 *      Dynamically allocates a std::string array.
 *      Asks the user to enter each name.
 *      Calls std::sort to sort the names
 *      Prints the sorted list of names.
 *      std::string supports comparing strings via the comparison operators < and >.
 *          You don’t need to implement string comparison by hand.
 */
#include <iostream>
#include <algorithm>

int main()
{
    std::cout << "How many names would you like to enter?: ";
    int totalNames{};
    std::cin >> totalNames;
    std::string* array{new std::string[totalNames]{}};

    for (int i = 0; i < totalNames; i++)
    {
        std::cout << "Enter name #" << i+1 << ": ";
        std::cin >> array[i];
    }

    std::sort(&array[0],&array[totalNames]);

    for (int i = 0; i < totalNames; i++)
    {
        std::cout << "Name #" << i+1 << ": " << array[i] << '\n';
    }

    return 0;
}