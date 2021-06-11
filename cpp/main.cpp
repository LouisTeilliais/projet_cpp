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
#include "../hpp/Start.hpp"


using namespace std;

int main(){

    srand(time(NULL));
    // start PersoName();
    string endLine1 = string("\e[1A\e[K");
    cout << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << "Bienvenue dans ce RPG ! Tout d'abord, nous allons vous demander le nom de vos personnages." << endl;
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

    cout << endLine1 << endLine1 << endLine1 << "A présent, nous pouvons commencer." <<endl;
    cout << "Le but du jeu est simple, vous devez choisir pour chacun de vos personnages une action à effectuer." << endl;
    cout << "Vous pouvez soit attaquer, soit utiliser la compétence spéciale du personnage soit vous soignez si vous le pouvez encore." << endl;

    sleep(15);
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
        Character drink(Perso1);
    } else if (choice == 4){
        
    }
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






    // try {
    //     srand(time(NULL));
    //     Mage gandalf("Gandalf");
    //     Barbarian conan("Conan");
    //     conan.enterFury();
    //     conan.attack(gandalf);

    //     conan.attack(gandalf);
    //     cout << "Gandalf a " << gandalf.getCurrentHp() << " PV" << endl;
    //     conan.enterFury();

    //     Potion small(3,100);
    
    //     gandalf += small;
    //     gandalf += small;
    //     gandalf += small;
    //     gandalf += small;
    //     cout << "All potions were drunk !" << endl;
    // }
    // catch(IllegalFury& illegalF){
    //     cout << "An illegal barbarian fury operation occured : " << illegalF.what() << endl;
    // }
    // catch(EmptyPotion& ep){
    //     cout << "An illegal barbarian fury operation occured : " << ep.what() << endl;
    // }
    // catch(std::exception& e){
    //     cout << "An exception occured : " << e.what() << endl;
    // }

    // cout << "End of combat" << endl;



    return 0;
}