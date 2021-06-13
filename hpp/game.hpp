#ifndef GAME_HPP
#define GAME_HPP
#include "Barbarian.hpp"
#include "Mage.hpp"
#include "Priest.hpp"
#include "Monster.hpp"
#include <iostream>
#include <ostream>
#include <iterator>

using namespace std;

class Rpg {
    public:
    string endLine1 = string("\e[1A\e[K");

    Rpg();

    // Début Partie
    void Start();

    // Demande nom des persos

    void PersoName();
    string MageName;
    string BarbarianName;
    string PriestName;
    
    Mage Perso1 = Mage(MageName);
    Barbarian Perso2 = Barbarian(BarbarianName);
    Priest Perso3 = Priest(PriestName);

    // Tour du Mage
    void MageTurn();

    // Tour du Barbare 

    void BarbarianTurn();

    // Tour du Priest 

    void PriestTurn();

    // Tour du Monstre 

    void MonsterTurn(Monster& monster, Character& persoSimpleAttck, Character& perso2ForZoneAttck, Character& perso3ForZoneAttck);
    
    Monster Monstre1 = Monster("Monstre1");
    Monster Monstre2 = Monster("Monstre2");
    Monster Monstre3 = Monster("Monstre3");


    void CallMonsterTurn();

    bool Alive();

    void DisplayHP();

    void test();
};



#endif