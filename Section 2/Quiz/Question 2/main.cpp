//
// Created by RetroHazard on 2023/03/13.
//
#include <iostream>

int readNumber();
void writeNumber(int x);

int main()
{
    std::cout << "Please enter inputs when prompted: \n";
    int x {readNumber()};
    int y {readNumber()};
    writeNumber(x + y);
    return 0;
}