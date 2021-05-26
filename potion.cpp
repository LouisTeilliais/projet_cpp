#include "./potion.hpp"

int Potion::getHealedHp(){
    if(remainingCharges <= 0){
            throw EmptyPotion();
        }
        remainingCharges -= 1;
        return hpPerCharge;
    }
}

bool operator<(const Potion& p) {
    return this->remainingCharges*this->hpPerCharge < p.remainingCharges* p.hpPerCharge;
}