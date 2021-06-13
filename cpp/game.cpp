#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <unistd.h>
#include <bits/stdc++.h>
#include "../hpp/game.hpp"
#include "../hpp/Barbarian.hpp"
#include "../hpp/Mage.hpp"
#include "../hpp/Priest.hpp"
#include "../hpp/Monster.hpp"

using namespace std;


Rpg::Rpg(){
    // choice = 0;
};

void Rpg::PersoName(){

    cout << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << "Bienvenue dans ce RPG ! Tout d'abord, nous allons vous demander le nom de vos personnages." << endl;

    cout << "Quel est le nom de votre mage ? " << endl;
    cin >> MageName;
    cout << endLine1 << endLine1 << "Quel est le nom de votre Barbare ? " << endl;
    cin >> BarbarianName;
    cout << endLine1 << endLine1 << "Quel est le nom de votre Prêtre ? " << endl;
    cin >> PriestName;
    
}

void Rpg::MageTurn(){
    
    int choice = 0;
    int choice2 = 0; 
    cout << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endl;
    cout << "Que doit faire votre Mage ? " << endl;
    cout << "1. Attaque simple" << "                            " << "2. Lancez une boule de feu ?" << endl;
    cout << "3. Boire une potion de soin(1 restantes)" << "     " << "4. Voir les stats actuelles du Mage" << endl;
    cin >> choice;
    cout << endLine1 << endLine1 << endLine1 << endl;
    
    if (choice == 1){
            cout << "1. Attaquer le monstre n°1" << "               " << "2. Attaquer le monstre n°2" << endl;
            cout << "3. Attaquer le monstre n°3" << "               " << "4. Revenir en arrière." << endl;
            cin >> choice2;
            if (choice2= 1){
                Perso1.attack(Monstre1);
            }else if (choice2 = 2){
                Perso1.attack(Monstre2);
            }else if (choice2 =  3){
                Perso1.attack(Monstre3);
            }else if (choice2 = 4){
                Rpg::MageTurn(); 
            }else {
                cout << "Error" << endl;
            }
    } else if (choice == 2){
            cout << "1. Attaquer le monstre n°1" << "      " << "2. Attaquer le monstre n°2" << endl;
            cout << "3. Attaquer le monstre n°3" << "      " << "4. Revenir en arrière" << endl;
            cin >> choice2;
            if (choice2= 1){
                Perso1.fireball(Monstre1);
            }else if (choice2 = 2){
                Perso1.fireball(Monstre2);
            }else if (choice2 =  3){
                Perso1.fireball(Monstre3);
            }else {
                Rpg::MageTurn();
            }
    } else if (choice == 3){
        Character drink();
        cout << "Il ne vous reste plus de potion" << endl;
    } else if (choice == 4){
        cout << "Nom : "<< MageName <<endl;
        cout << "Attaque :"<< Perso1.physicalAttack <<endl;
        cout << "Attaque magique : "<< Perso1.magicAttack <<endl;
        cout << "Défense : "<< Perso1.defense <<endl;
        cout << "HP actuel : "<< Perso1.hp <<endl;
        sleep(5);
        Rpg::MageTurn();
    } else {
        cout << "Error" << endl;
    }
}

void Rpg::Start(){

    cout << endLine1 << endLine1 << endLine1 << "A présent, nous pouvons commencer." <<endl;
    cout << "Le but du jeu est simple, vous devez choisir pour chacun de vos personnages une action à effectuer." << endl;
    cout << "Vous pouvez soit attaquer, soit utiliser la compétence spéciale du personnage soit vous soignez si vous le pouvez encore." << endl;
    sleep(5);
}

void Rpg::BarbarianTurn(){
    
    int choice = 0;
    int choice2 = 0; 
    cout << endLine1 << endLine1 << endLine1 << endl;
    cout << "Que doit faire votre Barbare ? " << endl;
    cout << "1. Attaque simple" << "                            " << "2. Entrez en mode furie ?" << endl;
    cout << "3. Boire une potion de soin(1 restantes)" << "     " << "4. Voir les stats actuelles du Barbare" << endl;
    cin >> choice;
    cout << endLine1 << endLine1 << endLine1 << endl;
    
    if (choice == 1){
            cout << "1. Attaquer le monstre n°1" << "               " << "2. Attaquer le monstre n°2" << endl;
            cout << "3. Attaquer le monstre n°3" << "               " << "4. Revenir en arrière." << endl;
            cin >> choice2;
            if (choice2= 1){
                Perso2.attack(Monstre1);
            }else if (choice2 = 2){
                Perso2.attack(Monstre2);
            }else if (choice2 =  3){
                Perso2.attack(Monstre3);
            }else if (choice2 = 4){
                Rpg::BarbarianTurn(); 
            }else {
                cout << "Error" << endl;
            }
    } else if (choice == 2){
            cout << "1. Attaquer le monstre n°1" << "      " << "2. Attaquer le monstre n°2" << endl;
            cout << "3. Attaquer le monstre n°3" << "      " << "4. Revenir en arrière" << endl;
            cin >> choice2;
            if (choice2= 1){
                Perso2.enterFury();
                Perso2.attack(Monstre1);
                Perso2.leaveFury();
            }else if (choice2 = 2){
                Perso2.enterFury();
                Perso2.attack(Monstre2);
                Perso2.leaveFury();
            }else if (choice2 =  3){
                Perso2.enterFury();
                Perso2.attack(Monstre3);
                Perso2.leaveFury();
            }else {
                Rpg::MageTurn();
            }
    } else if (choice == 3){
        Character drink();
        cout << "Il ne vous reste plus de potion" << endl;
    } else if (choice == 4){
        cout << "Nom : "<< BarbarianName <<endl;
        cout << "Attaque "<< Perso2.physicalAttack <<endl;
        cout << "Attaque magique : "<< Perso2.magicAttack <<endl;
        cout << "Défense : "<< Perso2.defense <<endl;
        cout << "HP actuel : "<< Perso2.hp <<endl;
    } else {
        cout << "Error" << endl;
    }
}

void Rpg::PriestTurn(){
    
    int choice = 0;
    int choice2 = 0; 
    cout << endLine1 << endLine1 << endLine1 << endl;
    cout << "Que doit faire votre Prêtre ? " << endl;
    cout << "1. Attaque simple" << "                            " << "2. Soignez un allié ?" << endl;
    cout << "3. Boire une potion de soin(1 restantes)" << "     " << "4. Voir les stats actuelles du Prêtre" << endl;
    cin >> choice;
    cout << endLine1 << endLine1 << endLine1 << endl;
    
    if (choice == 1){
            cout << "1. Attaquer le monstre n°1" << "               " << "2. Attaquer le monstre n°2" << endl;
            cout << "3. Attaquer le monstre n°3" << "               " << "4. Revenir en arrière." << endl;
            cin >> choice2;
            if (choice2= 1){
                Perso3.attack(Monstre1);
            }else if (choice2 = 2){
                Perso3.attack(Monstre2);
            }else if (choice2 =  3){
                Perso3.attack(Monstre3);
            }else if (choice2 = 4){
                Rpg::PriestTurn(); 
            }else {
                cout << "Error" << endl;
            }
    } else if (choice == 2){
            cout << "1. Soignez le Mage"     << "      " << "2. Soignez le Barbare" << endl;
            cout << "3. Se soignez soi-même" << "      " << "4. Revenir en arrière" << endl;
            cin >> choice2;
            if (choice2= 1){
                Perso3.magicHeal(Perso1);
            }else if (choice2 = 2){
                Perso3.magicHeal(Perso2);
            }else if (choice2 =  3){
                Perso3.magicHeal(Perso3);
            }else {
                Rpg::PriestTurn();
            }
    } else if (choice == 3){
        Character drink();
        cout << "Il ne vous reste plus de potion" << endl;
    } else if (choice == 4){
        cout << "Nom : "<< PriestName <<endl;
        cout << "Attaque "<< Perso3.physicalAttack <<endl;
        cout << "Attaque magique : "<< Perso3.magicAttack <<endl;
        cout << "Défense : "<< Perso3.defense <<endl;
        cout << "HP actuel : "<< Perso3.hp <<endl;
    } else {
        cout << "Error" << endl;
    }
}

void Rpg::MonsterTurn(Monster& monster, Character& persoSimpleAttck, Character& perso2ForZoneAttck, Character& perso3ForZoneAttck) {
    
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

void Rpg::CallMonsterTurn(){
    
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
}


bool Rpg::Alive(){

    if (Monstre1.hp <= 0 and Monstre2.hp <= 0 and Monstre3.hp <= 0){
        return false;
    }else if (Perso1.hp <= 0 and Perso2.hp <= 0 and Perso3.hp  <= 0){
        return false;
    }
    return true;
}

