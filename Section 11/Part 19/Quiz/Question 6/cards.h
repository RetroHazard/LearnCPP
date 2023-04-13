//
// Created by RetroHazard on 2023/04/13.
//

#ifndef LEARNCPP_CARDS_H
#define LEARNCPP_CARDS_H

enum class Rank {
    two,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    jack,
    queen,
    king,
    ace,
    max_ranks,
};
enum class Suit {
    clubs,
    diamonds,
    hearts,
    spades,
    max_suits,
};

struct Card {
    Rank rank;
    Suit suit;
};

#endif //LEARNCPP_CARDS_H
