#include "../hpp/Priest.hpp"
#include "../hpp/character.hpp"
#include <iostream>

using namespace std;

bool Priest:: tryUsingMp(int magicPoint){
    if(this-> magicPoint < magicPoint){
        return false;
    }
    this->magicPoint -= magicPoint;
    return true;
}

void Priest::magicHeal(Character& other){
    
    if(!tryUsingMp(this->maxMagicPoint*0.10f)){
        return;
    }

    int randomHeal = rand() % magicAttack + magicAttack ;
    
    
    other.heal(randomHeal);
}