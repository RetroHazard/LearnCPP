//
// Created by RetroHazard on 2023/03/20.
//
// https://www.learncpp.com/cpp-tutorial/chapter-6-summary-and-quiz/
/*
 * Objective:
 * Complete the following program by writing the passOrFail() function,
 * which should return true for the first 3 calls, and false thereafter.
 * Do this without modifying the main() function.
 */
#include <iostream>

/*
 * Alternative Solution (from website):
bool passOrFail()
{
	static int s_passes{ 3 };
	// Only decrement if necessary, to prevent eventual overflow
	if (s_passes >= 0)
	    --s_passes;
	return (s_passes >= 0);
}
 */

bool passOrFail() {
    static int runTotal { 0 };
    while (runTotal <= 2) {
        runTotal++;
        return true;
    }
}

int main()
{
    std::cout << "User #1: " << (passOrFail() ? "Pass\n" : "Fail\n");
    std::cout << "User #2: " << (passOrFail() ? "Pass\n" : "Fail\n");
    std::cout << "User #3: " << (passOrFail() ? "Pass\n" : "Fail\n");
    std::cout << "User #4: " << (passOrFail() ? "Pass\n" : "Fail\n");
    std::cout << "User #5: " << (passOrFail() ? "Pass\n" : "Fail\n");

    return 0;
}