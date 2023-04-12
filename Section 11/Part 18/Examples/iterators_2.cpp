//
// Created by RetroHazard on 2023/04/12.
// https://www.learncpp.com/cpp-tutorial/introduction-to-iterators/
#include <iostream>
#include <vector>

int main()
{
    std::vector v{ 1, 2, 3, 4, 5, 6, 7 };

    auto it{ v.begin() };

    ++it; // move to second element
    std::cout << *it << '\n'; // ok: prints 2

    v.erase(it); // erase the element currently being iterated over

    // erase() invalidates iterators to the erased element (and subsequent elements)
    // so iterator "it" is now invalidated

    ++it; // undefined behavior
    std::cout << *it << '\n'; // undefined behavior

    return 0;
}