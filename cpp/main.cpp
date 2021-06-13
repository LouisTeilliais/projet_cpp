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


using namespace std;

string endLine1 = string("\e[1A\e[K");

void MageTurn(){
    int choice = 0;
    cout << endLine1 << endLine1 << endLine1 << endl;
    cout << "Que doit faire votre Mage ? " << endl;
    cout << "1. Attaque simple" << "                            " << "2. Lancez une boule de feu ?" << endl;
    cout << "3. Boire une potion de soin(1 restantes)" << "     " << "4. Voir les stats actuelles du Mage" << endl;
    cin >> choice;
    cout << endLine1 << endLine1 << endLine1 << endl;
    
    if (choice == 1){
        cout << "1. Attaquer le monstre n°1" << "               " << "2. Attaquer le monstre n°2" << endl;
        cout << "3. Attaquer le monstre n°3" << "               " << "4. Revenir en arrière." << endl;
    } else if (choice == 2){
        cout << "1. Attaquer le monstre n°1" << "      " << "2. Attaquer le monstre n°2" << endl;
        cout << "3. Attaquer le monstre n°3" << "      " << "4. Revenir en arrière" << endl;
    } else if (choice == 3){
        Character drink();
    } else if (choice == 4){

    } else {
        // une erreur en gros
    }
}

void Start(){
    cout << endLine1 << endLine1 << endLine1 << "A présent, nous pouvons commencer." <<endl;
    cout << "Le but du jeu est simple, vous devez choisir pour chacun de vos personnages une action à effectuer." << endl;
    cout << "Vous pouvez soit attaquer, soit utiliser la compétence spéciale du personnage soit vous soignez si vous le pouvez encore." << endl;
    sleep(5);
}

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

int main(){

    srand(time(NULL));
    // Début du jeu avec demande des noms pour le joueur
    cout << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << "Bienvenue dans ce RPG ! Tout d'abord, nous allons vous demander le nom de vos personnages." << endl;
    string endLine1 = string("\e[1A\e[K");
    string MageName;
    string BarbarianName;
    string PriestName;
    cout << "Quel est le nom de votre mage ? " << endl;
    cin >> MageName;
    cout << endLine1 << endLine1 << "Quel est le nom de votre Barbare ? " << endl;
    cin >> BarbarianName;
    cout << endLine1 << endLine1 << "Quel est le nom de votre Prêtre ? " << endl;
    cin >> PriestName;
    // Création des personnages
    Mage Perso1(MageName);
    Barbarian Perso2(BarbarianName);
    Priest Perso3(PriestName);
    Monster Monstre1("Monstre 1");
    Monster Monstre2("Monstre 2");
    Monster Monstre3("Monstre 3");
    // Explication du jeu
    Start();
    // Tour du Mage
    MageTurn();

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

    return 0;
}