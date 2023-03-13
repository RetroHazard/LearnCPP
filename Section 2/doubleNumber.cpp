//
// Created by RetroHazard on 3/13/23.
//
#include <iostream>
#pragma once

int doubleNumber(int x)
{
    return x * 2;
}

/*
int main()
{
    std::cout << "Double of 2 is: " << doubleNumber(2) << '\n';
    std::cout << "Double of 6 is: " << doubleNumber(6) << '\n';
    std::cout << "Double of 12 is: " << doubleNumber(12) << '\n';

    return 0;
}*/

int main()
{
    int x{};
    std::cout << "Enter an Integer: ";
    std::cin >> x;
    std::cout << "Double of " << x << " is: " << doubleNumber(x) << '\n';

    return 0;
}