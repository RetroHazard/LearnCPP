//
// Created by RetroHazard on 2023/04/06.
//
// https://www.learncpp.com/cpp-tutorial/sorting-an-array-using-selection-sort/
/* Objective:
 * Add two optimizations to the bubble sort algorithm you wrote in the previous quiz question:
 *
 * Notice how with each iteration of bubble sort, the biggest number remaining gets bubbled to
 * the end of the array.
 * After the first iteration, the last array element is sorted.
 * After the second iteration, the second to last array element is sorted too.
 * And so on… With each iteration, we don’t need to recheck elements that we know are already sorted.
 * Change your loop to not re-check elements that are already sorted.
 *
 * If we go through an entire iteration without doing a swap, then we know the array must already be sorted.
 * Implement a check to determine whether any swaps were made this iteration, and if not, terminate the loop early.
 * If the loop was terminated early, print on which iteration the sort ended early.
 */
#include <iostream>

int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };

int main()
{
    constexpr int arraySize{static_cast<int>(std::size(array))};
    for (int index = 0; index < arraySize - 1; index++)
    {
        for (int nextIndex = 0; nextIndex < arraySize - index - 1 ; nextIndex++)
        {
            if (array[nextIndex] > array[nextIndex + 1])
                std::swap(array[nextIndex], array[nextIndex + 1]);
        }
    }

    for (int index = 0; index < arraySize; index++)
    {
        std::cout << array[index] << " ";
    }
    std::cout << std::endl;

    return 0;
}