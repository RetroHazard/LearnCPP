//
// Created by RetroHazard on 2023/04/11.
//
// https://www.learncpp.com/cpp-tutorial/for-each-loops/
/* Objective:
 * Declare a fixed array with the following names:
 * Alex, Betty, Caroline, Dave, Emily, Fred, Greg, and Holly.
 * Ask the user to enter a name.
 * Use a for each loop to see if the name the user entered is in the array.
 */
#include <iostream>

const std::string_view listNames[8]{
        "Alex",
        "Betty",
        "Caroline",
        "Dave",
        "Emily",
        "Fred",
        "Greg",
        "Holly"
};

void checkName(std::string_view input)
{
    bool isFound{false};

    for (auto name : listNames)
    {
        if (name == input)
        {
            isFound = true;
            break;
        }
    }
    std::cout << input << (isFound ? " was found.\n" : " was not found.\n");
}

int main()
{
    std::cout << "Enter a name: ";
    std::string name{};
    std::cin >> name;
    checkName(name);

    return 0;
}