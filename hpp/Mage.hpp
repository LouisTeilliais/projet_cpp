#ifndef MAGE_HPP
#define MAGE_HPP
#include "./character.hpp"
#include <string>
#include <cstdlib>

using namespace std;

class Mage : public Character {
    private:
    int mp;
    int maxMp;
    bool tryUsingMp(int mp);

    public:
    Mage(string name) : Character(name,Job::MageJob,25,75,5,420), maxMp(100), mp(100){}
    void fireball(Character& other);

    
};

#endif