//
// Created by RetroHazard on 2023/04/04.
//
// https://www.learncpp.com/cpp-tutorial/chapter-10-summary-and-quiz/
/* Objective:
 * Create a class template named Triad that has 3 members of the same template type.
 * The following program should compile:
 */
#include <iostream>

template <typename T>
struct Triad
{
    T first{};
    T second{};
    T third{};
};

template <typename T>
Triad(T, T, T) -> Triad<T>;

template <typename T>
void print(const Triad<T>& numSet)
{
    std::cout << '[' << numSet.first << ", " << numSet.second << ", " << numSet.third << ']';
};


// Begin Template Code from LearnCPP
int main()
{
    Triad t1{ 1, 2, 3 }; // note: uses CTAD to deduce template arguments
    print(t1);

    Triad t2{ 1.2, 3.4, 5.6 }; // note: uses CTAD to deduce template arguments
    print(t2);

    return 0;
}