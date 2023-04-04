//
// Created by RetroHazard on 2023/04/04.
//
// https://www.learncpp.com/cpp-tutorial/chapter-10-summary-and-quiz/
/* Objective:
 * In designing a game, we decide we want to have monsters, because everyone likes
 * fighting monsters. Declare a struct that represents your monster. The monster should
 * have a type that can be one of the following:
 * an ogre,
 * a dragon,
 * an orc,
 * a giant spider,
 * or a slime.
 *
 * Use an enum class for this.
 *
 * Each individual monster should also have a name (use a std::string or std::string_view),
 * as well as an amount of health that represents how much damage they can take before they die.
 * Write a function named printMonster() that prints out all of the struct’s members.
 * Instantiate an ogre and a slime, initialize them using an initializer list, and pass them to printMonster().
 */
#include <iostream>
#include <string>

enum class E_MonsterType
{
    ogre,
    dragon,
    orc,
    giant_spider,
    slime,
};

struct F_Monster
{
    E_MonsterType type{};
    std::string name{};
    int hit_points{};
};

constexpr std::string getMonsterTypeName(E_MonsterType type)
{
    switch (type) {
        case E_MonsterType::ogre :          return "Ogre";
        case E_MonsterType::dragon :        return "Dragon";
        case E_MonsterType::orc :           return "Orc";
        case E_MonsterType::giant_spider :  return "Giant Spider";
        case E_MonsterType::slime :         return "Slime";

        default:                            return "Unknown";
    }
}

void printMonster(const F_Monster& monster)
{
    std::cout << "This " << getMonsterTypeName(monster.type) << " is named " <<
    monster.name << " and has " << monster.hit_points << " health.\n";
}

int main()
{
    F_Monster ogre{E_MonsterType::ogre, std::string("Torg"), 145};
    F_Monster slime{E_MonsterType::slime, std::string("Blurp"), 23};

    printMonster(ogre);
    printMonster(slime);

    return 0;
}