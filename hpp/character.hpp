#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "./potion.hpp"
#include <string>

using namespace std;

enum Job {
    MonsterJob,
    MageJob,
    BarbarianJob,
    PriestJob,
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

    public:
    Character() : Character("John Doe",MageJob,100,100,50,1000){}

    Character(string name, Job job, int pAtt, int mAtt, int def, int maxHp);

    void heal(unsigned int healingValue);

    void drink(Potion& p);

    Character& operator+=(Potion& p);

    void attack(Character& defender);

    int getCurrentHp();

    public:
    void receiveDamage(int damage);
    void receiveHeal(int heal);
};

#endif