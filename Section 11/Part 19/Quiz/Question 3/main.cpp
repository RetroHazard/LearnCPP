//
// Created by RetroHazard on 2023/04/12.
//
// https://www.learncpp.com/cpp-tutorial/chapter-11-comprehensive-quiz/
/* Objective:
 *  Write your own function to swap the value of two integer variables.
 *  Write a main() function to test it.
 */
#include <iostream>

void swapValues(int& a, int& b)
{
    std::cout << "Swapping Values!\n";

    int temp;
    temp = b;
    b = a;
    a = temp;
};

int main()
{
    int a {5};
    int b {7};

    std::cout << "A is " << a << " and B is " << b << '\n';

    swapValues(a, b);

    std::cout << "A is " << a << " and B is " << b << '\n';

    return 0;
}