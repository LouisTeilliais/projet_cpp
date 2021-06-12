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

void PersoName(){
    cout << "Bienvenue dans ce RPG ! Tout d'abord, nous allons vous demander le nom de vos personnages." << endl;
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
    
    Mage Perso1(MageName);
    Barbarian Perso2(BarbarianName);
    Priest Perso3(PriestName);
}

<<<<<<< HEAD
    cout << endLine1 << endLine1 << endLine1 << "A présent, nous pouvons commencer." <<endl;
    cout << "Le but du jeu est simple, vous devez choisir pour chacun de vos personnages une action à effectuer." << endl;
    cout << "Vous pouvez soit attaquer, soit utiliser la compétence spéciale du personnage soit vous soignez si vous le pouvez encore." << endl;

    sleep(5);
=======
void MageTurn(){
>>>>>>> 9f29574781158658fa44c14907d3f7b5c6e8563f
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


int main(){

    srand(time(NULL));
    PersoName();
    Start();







    // int Ordre[6] = {MageSpeed, BarbarianSpeed, PriestSpeed, Monster1Speed, Monster2Speed, Monster3Speed};
    // int n = sizeof(Ordre) / sizeof(Ordre[0]);
    // sort(Ordre, Ordre + n);
    // for (int i = 0; i < n; ++i){
    //     cout << Ordre[i] << endl;
    // }

    Monster Monstre1("Monstre 1");
    Monster Monstre2("Monstre 2");
    Monster Monstre2("Monstre 3");

    int randomAction = rand() % 3;
    int randomEnemies = rand() % 3;

    if (randomAction = 0){
        
        if(randomEnemies = 0){
            Monstre1.simpleAttack(Perso1);
        }else if (randomEnemies = 1){
            Monstre1.simpleAttack(Perso2);
        }else {
            Monstre1.simpleAttack(Perso3);
        }
    }else if (randomAction = 1){
        
        if(randomEnemies = 0){
            Monstre1.simpleAttack(Perso1);
        }else if (randomEnemies = 1){
            Monstre1.simpleAttack(Perso2);
        }else {
            Monstre1.simpleAttack(Perso3);
        }
    }

    return 0;
}