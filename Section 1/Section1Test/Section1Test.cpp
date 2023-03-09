#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int firstNum { 0 };
    std::cin >> firstNum;

    std::cout << "Enter another integer: ";
    int secondNum { 0 };
    std::cin >> secondNum;
    
    std::cout << firstNum << " + " << secondNum << " is " << firstNum + secondNum <<".\n";
    std::cout << firstNum << " - " << secondNum << " is " << firstNum - secondNum <<".\n";
    

}