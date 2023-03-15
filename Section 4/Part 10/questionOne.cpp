//
// Created by RetroHazard on 3/15/23.
//
#include <iostream>

int readNumber()
{
    int x { };
    std::cout << "Please Enter a Number between 0 and 9 (inclusive): ";
    std::cin >> x;

    return x;
}

void isNumberPrime(int x)
{
    if (x == (2 | 3 | 5 | 7) )
        std::cout << "The digit is prime.\n";
    else
        std::cout << "The digit is not prime.\n";
}

int main()
{
    isNumberPrime(readNumber());
    return 0;
}