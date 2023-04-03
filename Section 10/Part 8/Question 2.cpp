//
// Created by RetroHazard on 2023/04/01.
//
// learncpp.com/cpp-tutorial/struct-passing-and-miscellany/
/* Objective:
 * Create a struct to hold a fraction. The struct should have an integer
 * numerator and an integer denominator member.
 *
 * Write a function to read in a Fraction from the user, and use it to
 * read-in two fraction objects.
 * Write another function to multiply two Fractions together and return
 * the result as a Fraction (you don’t need to reduce the fraction).
 * Write another function that prints a fraction.
 */
#include <iostream>

struct Fraction
{
    int numerator {};
    int denominator {};
};

Fraction getFraction()
{
    Fraction input;
    std::cout << "Enter a value for the numerator: ";
    std::cin >> input.numerator;
    std::cout << "Enter a value for the denominator: ";
    std::cin >> input.denominator;
    std::cout << '\n';
    return input;
}

Fraction multiFraction(const Fraction& input1, const Fraction& input2)
{
    int numerator (input1.numerator * input2.numerator);
    int denominator (input1.denominator * input2.denominator);
    return { numerator, denominator};
}

void printFraction(const Fraction& input)
{
    std::cout << "Your fractions multiplied together: ";
    std::cout << input.numerator << '/' << input.denominator;
}

int main()
{
    Fraction input1{ getFraction() };
    Fraction input2{ getFraction() };
    printFraction(multiFraction(input1,input2));

    return 0;
}