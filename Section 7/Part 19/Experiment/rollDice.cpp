//
// Created by RetroHazard on 2023/03/21.
//
#include <iostream>
#include <random>
#include <chrono>

int main()
{
    // Set current time, at Runtime, as seed.
    [[maybe_unused]] unsigned int currentTime{static_cast<unsigned int>(std::chrono::high_resolution_clock::now().time_since_epoch().count())};
    // Ask OS for random number, as seed.
    [[maybe_unused]] unsigned int tempSeed{ std::random_device{}() };
    // Multiple seed using random_device and seed_seq
    std::random_device rd;
    std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() };

    // Use the built-in Mersenne Twister (32bit)
    std::mt19937 mt{ss};

    std::uniform_int_distribution die4{ 1, 4 };
    std::uniform_int_distribution die6{ 1, 6 };
    std::uniform_int_distribution die8{ 1, 8 };
    std::uniform_int_distribution die10{ 1, 10 };
    std::uniform_int_distribution die12{ 1, 12 };
    std::uniform_int_distribution die20{ 1, 20 };

    std::cout << "4 Sided Die: " << die4(mt) << '\n';
    std::cout << "6 Sided Die: " << die6(mt) << '\n';
    std::cout << "8 Sided Die: " << die8(mt) << '\n';
    std::cout << "10 Sided Die: " << die10(mt) << '\n';
    std::cout << "12 Sided Die: " << die12(mt) << '\n';
    std::cout << "20 Sided Die: " << die20(mt) << '\n';

    return 0;
}