//
// Created by RetroHazard on 3/14/23.
//
#include <iostream>

// Adds two numbers
int add(int x, int y)
{
//  return x - y; // function is supposed to add, but it doesn't
    return x + y;
}

int main()
{
    std::cout << add(5, 3) << '\n';
    return 0;
}