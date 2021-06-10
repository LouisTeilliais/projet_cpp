#ifndef MONSTER_HPP
#define MONSTER_HPP
#include "./character.hpp"


class Monster : public Character {

    private:
    int numberAdverse = numbersofPlayers.size();

    public:
    Monster(string name) : Character(name, Job::MonsterJob, 250,0,20,1000){};
    void simpleAttack(Character& enemies);
        
    void zoneAttack(Character& enemies);

    void healMonster(Character& monsters);

    void random(Character& monsters, Character& enemies);
};


#endif