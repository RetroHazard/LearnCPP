//
// Created by RetroHazard on 2023/03/20.
//
//https://www.learncpp.com/cpp-tutorial/introduction-to-loops-and-while-statements/
/* Objective:
 * Write a program that prints out the letters a through z
 * along with their ASCII codes.
 */
#include <iostream>

int main()
{
    int a { 97 }; // ASCII value for 'a'
    int z { 122 }; // ASCII value for 'z'
    while (a <= z) {
        std::cout << static_cast<char>(a) << ' ' << a << '\n';
        ++a;
    }
    return 0;
}