//
// Created by RetroHazard on 3/16/23.
//
/*
 * Objective:
 * Write a program that asks the user to enter their full name and their age.
 * As output, tell the user the sum of their age and the number of letters
 * in their name (use the std::string::length() member function to get the
 * length of the string).
 * For simplicity, count any spaces in the name as a letter.
*/

#include <iostream>
#include <string>

int getFullName()
{
    std::string fullName{};
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, fullName);
    return static_cast<int>(fullName.length());
}

int getAge()
{
    int age{ };
    std::cout << "Enter your age: ";
    std::cin >> age;

    return age;
}

/*int getLength(int nameLen, int age)
{
    int length;
    length = nameLen + age;
    return length;
}*/

int main()
{
    // This also produces the correct values, but Age is asked first.
    // int length {getLength(getFullName(),getAge())};

    int nameLen{ getFullName() };
    int age { getAge() };
    int totalLen { nameLen + age };
    std::cout << "Your age + length of name is: " << totalLen;

    return 0;
}