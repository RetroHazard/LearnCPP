//
// Created by RetroHazard on 3/17/23.
//
// https://www.learncpp.com/cpp-tutorial/5-3-modulus-and-exponentiation/
/*
 * Objective:
 * Write a program that asks the user to input an integer, and tells
 * the user whether the number is even or odd.
 * Write a function called isEven() that returns true if an integer passed to it is even,
 * and false otherwise.
 * Use the modulus operator to test whether the integer parameter is even.
 */
#include <iostream>

int getNum()
{
    std::cout << "Enter an Integer: ";
    int num{ };
    std::cin >> num;
    return num;
}

void isEven(int x)
{
    if (x % 2 == 0)
        std::cout << x << " is even.\n";
    else
        std::cout << x << " is odd.\n";
}

/* Alternative Solution from the Webpage
bool isEven(int x)
{
    // if x % 2 == 0, 2 divides evenly into our number, which means it must be an even number
    return (x % 2) == 0;
}
 */

int main()
{
    int num{getNum()};
    isEven(num);
    return 0;
}