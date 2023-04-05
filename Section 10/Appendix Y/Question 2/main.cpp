//
// Created by RetroHazard on 2023/04/05.
//
// https://www.learncpp.com/cpp-tutorial/using-a-language-reference/
/* Objective:
 * In the following code, modify str so that its value is “I saw a blue car yesterday”
 * without repeating the string.
*/

#include <iostream>
#include <string>

int main()
{
    std::string str{ "I saw a red car yesterday." };

    // ...
    // https://en.cppreference.com/w/cpp/string/basic_string/replace
    str.replace(8,3, "blue");
    // ...

    std::cout << str << '\n'; // I saw a blue car yesterday.

    return 0;
}