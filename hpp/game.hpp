#ifndef GAME_HPP
#define GAME_HPP
#include "Barbarian.hpp"
#include "Mage.hpp"
#include "Priest.hpp"
#include <iostream>
#include <ostream>
#include <iterator>

using namespace std;

class Rpg {
    public:
    string endLine1 = string("\e[1A\e[K");

    Rpg();

    // Demande nom des persos

    void PersoName();
    string MageName;
    string BarbarianName;
    string PriestName;
    
    Mage Perso1 = Mage(MageName);
    Barbarian Perso2 = Barbarian(BarbarianName);
    Priest Perso3 = Priest(PriestName);

    // tour du mage
    void MageTurn();

    // début game

    void Start();
};



#endif