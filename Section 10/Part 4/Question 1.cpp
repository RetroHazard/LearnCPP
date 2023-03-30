//
// Created by RetroHazard on 2023/03/30.
//
//
/* Objective:
 * Define an enum class named Animal that contains the following animals:
 * pig, chicken, goat, cat, dog, duck.
 *
 * Write a function named getAnimalName() that takes an Animal parameter
 * and uses a switch statement to return the name for that animal
 * as a std::string_view (or std::string if you’re using C++14).
 *
 * Write another function named printNumberOfLegs() that uses a switch statement
 * to print the number of legs each animal walks on.
 *
 * Make sure both functions have a default case that prints an error message.
 * Call printNumberOfLegs() from main() with a cat and a chicken.
 */
#include <iostream>

enum class Animal
{
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

constexpr std::string_view getAnimalName(Animal animal)
{
    using enum Animal;
    switch (animal) {
        case pig: return "pig";
        case chicken: return "chicken";
        case goat: return "goat";
        case cat: return "cat";
        case dog: return "dog";
        case duck: return "duck";
        default: return "???";
    }
}

int printNumberOfLegs(Animal animal)
{
    using enum Animal;
    switch (animal) {
        case chicken:
        case duck:
            return 2;
        case pig:
        case goat:
        case cat:
        case dog:
            return 4;

        default: break;
    }
}

int main()
{
    std::cout << "A " << getAnimalName(Animal::cat) << " has " << printNumberOfLegs(Animal::cat) << " legs.\n";
    std::cout << "A " << getAnimalName(Animal::chicken) << " has " << printNumberOfLegs(Animal::chicken) << " legs.\n";
}