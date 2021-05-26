#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <exception>

using namespace std;

enum Job {
    BarbarianJob,
    MageJob,
    PriestJob,
    MonsterJob,
};

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
    Character() : Character("John Doe", BarbarianJob,100,100,50,1000){}

    Character(string name, Job job, int pAtt, int mAtt, int def, int maxHp){
        this->name = name;
        this->job = job;
        this->physicalAttack = pAtt;
        this->magicAttack = mAtt;
        this->defense = def;
        this->maxHp = maxHp;
        this->hp = maxHp;
        this->registerPlayer();
    }


    void heal(unsigned int healingValue) {
        if( hp + healingValue > maxHp){
            hp = maxHp;
        }
        else {
            hp += healingValue;
        }
    }

    // void drink(Potion& p){
    //     this->heal(p.getHealedHp());
    // }

    // Character& operator+=(Potion& p){
    //     this->drink(p);
    //     return *this;
    // }

    void attack(Character& defender) {
        int damage = this->physicalAttack - defender.defense;
        defender.receiveDamage(damage);
    }

    int getCurrentHp(){
        return this->hp;
    }

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

class Barbarian : public Character {
    private:
    int baseAttack;
    int baseDefense;
    bool inFury;

    public:
    Barbarian(string name) : Character(name,Job::BarbarianJob,200,0,15,900) {
        baseAttack = this->physicalAttack;
        baseDefense = this->defense;
        inFury = false;
    }
    void enterFury(){
        if( inFury ){
            throw IllegalFury(true);
        }
        baseAttack = this->physicalAttack;
        baseDefense = this->defense;
        inFury = true;
        physicalAttack *= 1.5f;
        defense = 0;
        this->receiveDamage(maxHp*0.15f);
    }
    void leaveFury(){
        if(!inFury){
            throw IllegalFury(false);
        }
        physicalAttack = baseAttack;
        defense = baseDefense;
        inFury = false;
    }
};

class Mage : public Character {
    private:
    int mp;
    int maxMp;
    bool tryUsingMp(int mp){
        if(this->mp < mp){
            return false;
        }
        this->mp -= mp;
    }

    public:
    Mage(string name) : Character(name,Job::MageJob,15,200,30,1000), maxMp(100), mp(100){}
    void fireball(Character& other){
        if(!tryUsingMp(this->maxMp*0.10f)){
            return;
        }
        int randomNumber = rand() % 10;
        if(randomNumber == 0){
            return;
        }
        other.receiveDamage(this->magicAttack);
    }
};