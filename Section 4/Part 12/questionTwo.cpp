//
// Created by RetroHazard on 3/15/23.
//
/*
 * Objective:
 * Modify the program you wrote for question #1 to use implicit type conversion
 * instead of static_cast. How many different ways can you think of to do this?
*/
#include <iostream>

char readCharacter()
{
    char x { };
    std::cout << "Enter a single character: ";
    std::cin >> x;

    return x;
}

void convertToASCII(char x)
{
    int y { x }; // initialize and assign char as int
    std::cout << "You entered \'" << x << "\', which has ASCII code " << y << ".\n";
}

int main()
{
    char x { readCharacter() };
    convertToASCII(x);

    return 0;
}