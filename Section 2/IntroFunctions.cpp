//
// Created by Alexander Bracken on 2023/03/08.
//
#include <iostream>

// Define printInterrupt()
void printInterrupt()
{
    std::cout << "This is within printInterrupt()\n";
}

// Define main()
int main()
{
    std::cout << "Starting main()\n";
    printInterrupt();
    std::cout << "Ending main()\n";

    return 0;
}