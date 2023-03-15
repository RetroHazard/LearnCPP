//
// Created by RetroHazard on 3/15/23.
//

/* Original Code Block
#include <iostream>

bool isAllowedToTakeFunRide()
{
    std::cout << "How tall are you? (cm)\n";

    double height{};
    std::cin >> height;

    if (height > 140.0)
        return true;
    else
        return false;
}

int main()
{
    if (isAllowedToTakeFunRide())
        std::cout << "Have fun!\n";
    else
        std::cout << "Sorry, you're too short.\n";

    return 0;
}*/

// Begin Code Reduction
#include <iostream>

void isAllowedToTakeFunRide()
{
    std::cout << "How tall are you? (cm)\n";

    double height{};
    std::cin >> height;

    if (height > 140.0)
        std::cout << "Have fun!\n";
    else
        std::cout << "Sorry, you're too short.\n";
}

/* Alternate Solution
bool isAllowedToTakeFunRide()
{
    std::cout << "How tall are you? (cm)\n";

    double height{};
    std::cin >> height;

    return (height > 140.0);
}*/

int main()
{
    isAllowedToTakeFunRide();
    return 0;
}