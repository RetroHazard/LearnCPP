//
// Created by RetroHazard on 2023/03/22.
//
// https://www.learncpp.com/cpp-tutorial/typedefs-and-type-aliases/
/* Objective:
 * Convert the int return value to a type alias named PrintError.
 * Include both the type alias statement and the updated function prototype.
 *          int printData();
 */

#include <iostream>

using PrintError = int;

int printData()
{
    int x;
    return x;
}

int main()
{
    PrintError printData();
}