#include "./character.hpp"
  
  
Character::Character(string name, Job job, int pAtt, int mAtt, int def, int maxHp){
    this->name = name;
    this->job = job;
    this->physicalAttack = pAtt;
    this->magicAttack = mAtt;
    this->defense = def;
    this->maxHp = maxHp;
    this->hp = maxHp;
    this->registerPlayer();
}

void Character::heal(unsigned int healingValue) {
    if( hp + healingValue > maxHp){
        hp = maxHp;
    }
    else {
        hp += healingValue;
    }
}

void Character::drink(Potion& p){
    this->heal(p.getHealedHp());
}

void Character::attack(Character& defender) {
    int damage = this->physicalAttack - defender.defense;
    defender.receiveDamage(damage);
}


int Character::getCurrentHp(){
    return this->hp;
}