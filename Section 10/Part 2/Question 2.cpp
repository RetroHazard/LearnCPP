//
// Created by RetroHazard on 2023/03/30.
//
// https://www.learncpp.com/cpp-tutorial/unscoped-enumerations/
/* Objective:
 * Put the MonsterType enumeration inside a namespace.
 * Then, create a main() function and instantiate a troll.
 * The program should compile.
 */
namespace enemy {
    enum MonsterType {
        orcs,
        goblins,
        trolls,
        ogres,
        skeletons,
    };
}
int main()
{
    enemy::MonsterType smallTroll {enemy::trolls };
    return 0;
}