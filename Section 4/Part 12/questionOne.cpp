//
// Created by RetroHazard on 3/15/23.
//
/*
 * Objective:
 * The program’s output should match the following:
 *
 * Enter a single character: a
 * You entered 'a', which has ASCII code 97.
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
    std::cout << "You entered \'" << x << "\', which has ASCII code " << static_cast<int>(x) << ".\n";
}

int main()
{
    char x { readCharacter() };
    convertToASCII(x);

    return 0;
}