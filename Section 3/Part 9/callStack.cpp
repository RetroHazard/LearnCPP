//
// Created by RetroHazard on 3/14/23.
//
#include <iostream>

void a()
{
    std::cout << "a() called\n";
}

void b()
{
    std::cout << "b() called\n";
    a();
}

int main()
{
    a();
    b();

    return 0;
}