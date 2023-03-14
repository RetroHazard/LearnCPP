//
// Created by RetroHazard on 3/14/23.
//
#include <iostream>

int readNumber(int x)
{
    std::cout << "Please enter a number: ";
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The sum is: " << x << '\n';
}

int main()
{
    int x {}; // x is initialized as blank
//    readNumber(x);
//    x = x + readNumber(x); // x is assigned the local value of 0 before adding the return value from readNumber()
//  int x { readNumber() }; // Alternatively, x can be initialized with the return value from readNumber()
    x = readNumber(x) + readNumber(x); // x now operates on the return value of both readNumber() function calls.
    writeAnswer(x);

    return 0;
}