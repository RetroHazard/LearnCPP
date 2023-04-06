//
// Created by RetroHazard on 2023/04/05.
//
// https://www.learncpp.com/cpp-tutorial/arrays-and-loops/
/* Objective:
 * Given the array in question 1:
 * Ask the user for a number between 1 and 9.
 * If the user does not enter a number between 1 and 9, repeatedly
 * ask for an integer value until they do.
 *
 * Once they have entered a number between 1 and 9, print the array.
 * Then search the array for the value that the user entered and
 * print the index of that element.
 */
#include <iostream>
#include <iterator>
#include <limits>

constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };

// Begin Solution
int getUserSelection()
{
    int selection{};
    while (selection < 1 || selection > 9)
    {
        std::cout << "Please enter a number between 1 and 9: ";
        std::cin >> selection;

        if (std::cin.fail())
            std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return selection;
}

int main()
{
    int userSelection{getUserSelection()};
    constexpr int arraySize{static_cast<int>(std::size(array))};

    std::cout << array[userSelection];
    for (int i = 0; i < arraySize; i++)
        std::cout << array[i] << ' ';

    std::cout << '\n';

    for (int i = 0; i < arraySize ; i++) {
        if (array[i] == userSelection)
        {
            std::cout << "The number " << userSelection << " has index " << i << '\n';
            break;
        }
    }


    return 0;
}