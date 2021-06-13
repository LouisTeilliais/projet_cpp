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
    cout << endLine1 << endLine1 << endLine1 << endl;
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
                // Perso1.attack(//monster1)
            }else if (choice2 = 2){
                // idem monstre2 
            }else if (choice2 =  3){
                // idem monstre3
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
                
            }else if (choice2 = 2){
                // idem monstre2 
            }else if (choice2 =  3){
                // idem monstre3
            }else {
                //revenir en arrière 
            }
    } else if (choice == 3){
        Character drink();
        cout << "Il ne vous reste plus de potion" << endl;
    } else if (choice == 4){
        cout << "Nom : "<< MageName <<endl;
        cout << "Attaque "<< Perso1.physicalAttack <<endl;
        cout << "Attaque magique : "<< Perso1.magicAttack <<endl;
        cout << "Défense : "<< Perso1.defense <<endl;
        cout << "HP actuel : "<< Perso1.hp <<endl;
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