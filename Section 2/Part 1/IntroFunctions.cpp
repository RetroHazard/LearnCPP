//
// Created by Alexander Bracken on 2023/03/08.
//
#include <iostream>

// Define mainInterrupt()
void mainInterrupt()
{
    std::cout << "This is within mainInterrupt()\n";
}

// Define altInterrupt()
void altInterrupt()
{
    std::cout << "This is within altInterrupt()\n";
}

// Define main()
int main()
{
    std::cout << "Starting main()\n";
    mainInterrupt();
    altInterrupt();
    std::cout << "Ending main()\n";

    return 0;
}