#ifndef PRIEST_HPP
#define PRIEST_HPP
#include <string>
#include "./character.hpp"


class Priest : public Character {
    private :
    int magicPoint;
    int maxMagicPoint;
    bool tryUsingMp(int magicPoint);

    public:
    Priest(string name) : Character(name, Job::PriestJob, 35,15,35,150), magicPoint(100), maxMagicPoint(150){};
    void magicHeal(Character& other);

};

#endif