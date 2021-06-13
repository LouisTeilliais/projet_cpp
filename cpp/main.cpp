#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <unistd.h>
#include <bits/stdc++.h>
#include "../hpp/character.hpp"
#include "../hpp/Barbarian.hpp"
#include "../hpp/Mage.hpp"
#include "../hpp/potion.hpp"
#include "../hpp/exception.hpp"
#include "../hpp/Priest.hpp"
#include "../hpp/Monster.hpp"
#include "../hpp/Start.hpp"
#include "../hpp/game.hpp"


using namespace std;
string endLine1 = string("\e[1A\e[K");

int main(int argc, char const *argv[]){

    srand(time(NULL));
    
    Rpg rpg;
    rpg.Start();

    rpg.PersoName();
    
    while (rpg.Alive()) {
        
        
        
        rpg.MageTurn();
        
        rpg.PriestTurn();

        rpg.BarbarianTurn();

        rpg.CallMonsterTurn();

        rpg.DisplayHP();
    }

    return 0;
}