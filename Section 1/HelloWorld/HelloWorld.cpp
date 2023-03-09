#include <iostream>
#include <limits>

int main()
{
    std::cout << "Hello, World!" << std::endl;

    std::cin.clear(); //reset error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore any characters in the input buffer until we find a newline
    std::cin.get(); //get one more char from the user (waits to close on key)
    return 0;
}