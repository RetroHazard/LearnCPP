//
// Created by RetroHazard on 2023/03/20.
//
// https://www.learncpp.com/cpp-tutorial/switch-fallthrough-and-scoping/
/* Objective:
 * Write a function called calculate() that takes two integers
 * and a char representing one of the following mathematical
 * operations: +, -, *, /, or % (modulus).
 *
 * Use a switch statement to perform the appropriate mathematical
 * operation on the integers, and return the result.
 * If an invalid operator is passed into the function, the function
 * should print an error.
 * For the division operator, do an integer division.
 */
#include <iostream>

int calculate(int x, int y, char op)
{
    switch (op) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        case '%':
            return x % y;
        default:
            std::cout << "Invalid Selection, Quitting.\n";
            exit(1);
    }
}

int main()
{
    std::cout << "Enter an Integer: ";
    int x;
    std::cin >> x;

    std::cout << "Enter another Integer: ";
    int y;
    std::cin >> y;

    std::cout << "Enter an operator (+, -, *, /, %): ";
    char op;
    std::cin >> op;

    std::cout << calculate(x, y, op) << '\n';
    return 0;
}