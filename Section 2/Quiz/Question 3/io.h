//
// Created by RetroHazard on 2023/03/13.
//
#include <iostream>
#pragma once

int readNumber()
{
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    return x;
}

void writeNumber(int num)
{
    std::cout << "Your numbers equal to " << num << '\n';
}

