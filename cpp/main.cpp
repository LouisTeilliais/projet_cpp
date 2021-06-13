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

void MonsterTurn(Monster& monster, Character& persoSimpleAttck, Character& perso2ForZoneAttck, Character& perso3ForZoneAttck) {
    int randomAction = rand() % 3;
    if (randomAction == 0){
        monster.simpleAttack(persoSimpleAttck);
    } else if (randomAction == 1){
        monster.zoneAttack(persoSimpleAttck);
        monster.zoneAttack(perso2ForZoneAttck);
        monster.zoneAttack(perso3ForZoneAttck);
    } else {
        monster.healMonster(monster);
    }
}

int main(int argc, char const *argv[]){

    srand(time(NULL));
    
    Rpg rpg;
    rpg.Start();
    
    rpg.PersoName();
    
    rpg.MageTurn();

        // Tour du 1er monstre
    int randomEnemies = rand() % 3;
    if (randomEnemies = 0){
        MonsterTurn(Monstre1, Perso1, Perso2, Perso3);
    } else if ( randomEnemies == 1){
        MonsterTurn(Monstre1, Perso2, Perso3, Perso1);
    } else if ( randomEnemies == 2){
        MonsterTurn(Monstre1, Perso3, Perso1, Perso2);
    }
    // Fin de son tour
    // Tour du 2nd monstre
    int randomEnemies2 = rand() % 3;
    if (randomEnemies2 = 0){
        MonsterTurn(Monstre2, Perso1, Perso2, Perso3);
    } else if ( randomEnemies2 == 1){
        MonsterTurn(Monstre2, Perso2, Perso3, Perso1);
    } else if ( randomEnemies2 == 2){
        MonsterTurn(Monstre2, Perso3, Perso1, Perso2);
    }
    // Fin de son tour
    // Tour du 3ème monstre
    int randomEnemies3 = rand() % 3;
    if (randomEnemies3 = 0){
        MonsterTurn(Monstre3, Perso1, Perso2, Perso3);
    } else if ( randomEnemies3 == 1){
        MonsterTurn(Monstre3, Perso2, Perso3, Perso1);
    } else if ( randomEnemies3 == 2){
        MonsterTurn(Monstre3, Perso3, Perso1, Perso2);
    }
    // Fin de son tour

    cout << Perso1.hp << ", " << Perso2.hp << ", " << Perso3.hp << endl;
    
    
    // int MageSpeed = 30;
    // int BarbarianSpeed = 10; 
    // int PriestSpeed = 20;
    // int Monster1Speed = rand() % 20 + 10;
    // int Monster2Speed = rand() % 20 + 10;
    // int Monster3Speed = rand() % 20 + 10;

    // int Ordre[6] = {MageSpeed, BarbarianSpeed, PriestSpeed, Monster1Speed, Monster2Speed, Monster3Speed};
    // int n = sizeof(Ordre) / sizeof(Ordre[0]);
    // sort(Ordre, Ordre + n);
    // for (int i = 0; i < n; ++i){
    //     cout << Ordre[i] << endl;
    // }

    // Monster Monstre1("Monstre 1");
    // Monster Monstre2("Monstre 2");
    // Monster Monstre2("Monstre 3");

    // int randomAction = rand() % 3;
    // int randomEnemies = rand() % 3;


    // Monstre 1
    // if (randomAction = 0){
        
    //     if(randomEnemies = 0){
    //         Monstre1.simpleAttack(Perso1);
    //     }else if (randomEnemies = 1){
    //         Monstre1.simpleAttack(Perso2);
    //     }else {
    //         Monstre1.simpleAttack(Perso3);
    //     }
    // }else if (randomAction = 1){

        
    // }

    return 0;
}