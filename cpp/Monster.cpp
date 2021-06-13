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
