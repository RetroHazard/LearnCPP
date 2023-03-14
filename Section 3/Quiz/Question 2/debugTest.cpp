//
// Created by RetroHazard on 3/14/23.
//
#include <iostream>

int readNumber()
{
    std::cout << "Please enter a number: ";
    int x {};
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The quotient is: " << x << '\n';
}

int main()
{
    int x{ readNumber() }; // initialize x using readNumber()
    int y{ readNumber() }; // initialize y using readNumber()
/*
    x = readNumber();
    x = readNumber(); // This should be an assignment for y
*/
    writeAnswer(x / y);

    return 0;
}