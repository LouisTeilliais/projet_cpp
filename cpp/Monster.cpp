#include "../hpp/Monster.hpp"

using namespace std;


void Monster::simpleAttack(Character& enemies){
    
    int attack = this->physicalAttack;
    enemies.receiveDamage(attack);
}

void Monster::zoneAttack(Character& enemies){
    
    int ZAvalue = (this->physicalAttack / numberAdverse) - enemies.defense;
            
    enemies.receiveDamage(ZAvalue);
}

void Monster::healMonster(Character& monsters){
    monsters.defense += 20;
}

void Monster::random(Character& monsters, Character& enemies){
    
    int random = rand() % 3;

    if (random = 0){
        simpleAttack(enemies);

    }else if (random = 1){
        healMonster(monsters);

    }else {
        zoneAttack(enemies);
    }
}