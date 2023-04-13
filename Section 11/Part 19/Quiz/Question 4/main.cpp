//
// Created by RetroHazard on 2023/04/12.
//
// https://www.learncpp.com/cpp-tutorial/chapter-11-comprehensive-quiz/
/* Objective:
 *  Write a function to print a C-style string character by character.
 *  Use a pointer to step through each character of the string and print that character.
 *  Stop when you hit the null terminator.
 *  Write a main function that tests the function with the string literal “Hello, world!”.
 */
#include <iostream>
#include <iterator>

void printByChar(char* input)
{
    auto stringLen (std::strlen(input));
    //std::cout << stringLen;
    for (int i = 0; i < stringLen; ++i, *input++) {
        std::cout << *input;
    }
}

int main()
{
    char cString[]{ "Hello, world!" };

    printByChar(cString);

    return 0;
}