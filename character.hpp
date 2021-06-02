#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>

class Character
{

    public:
    string name;

    protected:
    
    int physicalAttack;
    int magicAttack;
    int defense;
    int maxHp;
    int hp;

    private:
    Job job;
    static vector<Character*> registeredPlayers;

    public:
    Character() : Character("John Doe",FreelancerJob,100,100,50,1000){}

    Character(string name, Job job, int pAtt, int mAtt, int def, int maxHp);


    void heal(unsigned int healingValue);

    void drink(Potion& p);}

    Character& operator+=(Potion& p){
        this->drink(p);
        return *this;
    }

    void attack(Character& defender);

    int getCurrentHp();

    static int getRegisteredNumber(){
        return Character::registeredPlayers.size();
    }

    public:
    void receiveDamage(int damage){
        if(damage < 0) {
            damage = 0;
        }
        if(this->hp - damage < 0){
            this->hp = 0;
        }
        else {
            this->hp -= damage;
        }
    }

    private:
    void registerPlayer(){
        Character::registeredPlayers.push_back(this);
    }

};