//
// Created by Alexander Bracken on 2023/03/08.
//
#include <iostream>

/* Incorrect Nesting
int main()
{
    void foo() // Illegal: this function is nested inside function main()
    {
        std::cout << "foo!\n";
    }

    foo(); // function call to foo()
    return 0;
}*/

// Fixed Nesting
void foo() // no longer inside of main()
{
    std::cout << "foo!\n";
}

int main()
{
    foo();
    return 0;
}