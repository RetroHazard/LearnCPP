//
// Created by RetroHazard on 2023/04/12.
// https://www.learncpp.com/cpp-tutorial/introduction-to-standard-library-algorithms/#std_sort
#include <algorithm>
#include <array>
#include <iostream>

/*
bool greater(int a, int b)
{
    // Order @a before @b if @a is greater than @b.
    return (a > b);
}

bool lesser(int a, int b)
{
    return (a < b);
}
*/

int main()
{
    std::array arr{ 13, 90, 99, 5, 40, 80 };

    // Pass greater to std::sort
    std::sort(arr.begin(), arr.end(), std::less{});

    for (int i : arr)
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';

    return 0;
}