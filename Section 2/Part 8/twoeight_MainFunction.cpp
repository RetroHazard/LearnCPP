//
// Created by RetroHazard on 3/13/23.
//
#include <iostream>

int getInteger();

int main()
{
    int x{ getInteger() };
    int y{ getInteger() };

    std::cout << x << " + " << y << " is " << x + y << '\n';
    return 0;
}