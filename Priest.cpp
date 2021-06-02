#include "./Priest.hpp"
#include "./character.hpp"
#include <iostream>

using namespace std;

bool Priest:: tryUsingMp(int magicPoint){
    if(this-> magicPoint < magicPoint){
        return false;
    }
    this->magicPoint -= magicPoint;
}

void Priest::magicHeal(Character& other){
    
    if(!tryUsingMp(this->maxMagicPoint*0.10f)){
        return;
    }

    int randomHeal = rand() % magicAttack + magicAttack ;
    cout << randomHeal << endl;

    other.receiveHeal(this->magicAttack);
}