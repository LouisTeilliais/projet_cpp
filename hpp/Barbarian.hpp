#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include "./character.hpp"
#include <string>
#include "./exception.hpp"

using namespace std;

class Barbarian : public Character {
    private:
    int baseAttack;
    int baseDefense;
    bool inFury;

    public:
    Barbarian(string name) : Character(name,Job::BarbarianJob,75,0,20,280){};
    void enterFury();
    void leaveFury();
};

#endif