//
// Created by RetroHazard on 2023/04/06.
//
// https://www.learncpp.com/cpp-tutorial/sorting-an-array-using-selection-sort/
/* Objective:
 * Bubble sort works by comparing adjacent pairs of elements, and swapping them if the criteria is met,
 * so that elements “bubble” to the end of the array. Although there are quite a few ways to optimize
 * bubble sort, in this quiz we’ll stick with the unoptimized version here because it’s simplest.
 *
 * Unoptimized bubble sort performs the following steps to sort an array from smallest to largest:
 * A) Compare array element 0 with array element 1. If element 0 is larger, swap it with element 1.
 * B) Now do the same for elements 1 and 2, and every subsequent pair of elements until you hit the end of
 *      the array. At this point, the last element in the array will be sorted.
 * C) Repeat the first two steps again until the array is sorted.
 *
 * Write code that bubble sorts the following array according to the rules above:
 * Print the sorted array elements at the end of your program.
 */


int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };