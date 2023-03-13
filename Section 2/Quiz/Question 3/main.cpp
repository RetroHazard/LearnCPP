//
// Created by RetroHazard on 2023/03/13.
//
#include "io.h"
#include <iostream>

int main()
{
    std::cout << "Please enter inputs when prompted: \n";
    int x {readNumber()};
    int y {readNumber()};
    writeNumber(x + y);
    return 0;
}