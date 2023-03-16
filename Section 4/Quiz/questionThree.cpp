//
// Created by RetroHazard on 3/16/23.
//
// https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz/
/*
 * Objective:
 * Write the following program:
 * The user is asked to enter 2 floating point numbers (use doubles).
 * The user is then asked to enter one of the following mathematical symbols: +, -, *, or /.
 * The program computes the answer on the two numbers the user entered and prints the results.
 * If the user enters an invalid symbol, the program should print nothing.
 */
#include <iostream>

double enterValue()
{
    double x{ };
    std::cout << "Enter a double value: ";
    std::cin >> x;
    return x;
}

char chooseOperation()
{
    char op { };
    std::cout << "Enter one of the following: +, -, *, or /: ";
    std::cin >> op;
    return op;
}

void printResult(double x, double y, char op)
{
    double result{ };
    switch (op) {
        case '+':
            std::cout << "Addition Selected\n";
            result = x + y;
            break;
        case '-':
            std::cout << "Subtraction Selected\n";
            result = x - y;
            break;
        case '*':
            std::cout << "Multiplication Selected\n";
            result = x * y;
            break;
        case '/':
            std::cout << "Division Selected\n";
            result = x / y;
            break;
        default:
            exit(1);
    }
    std::cout << x << " " << op << " " << y << " is " << result << '\n';
}

int main()
{
    double x { enterValue() };
    double y { enterValue() };
    char op { chooseOperation() };

    printResult( x, y, op);
    return 0;
}