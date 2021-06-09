#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
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
    cout << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << endLine1 << "Bienvenue dans ce RPG ! Tout d'abord, nous allons vous demander le nom de vos personnages." << endl;
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

    int MageSpeed = 15;
    int BarbarianSpeed = 10;
    int PriestSpeed = 13;
    int Monster1Speed = rand() % 8 + 8;
    int Monster2Speed = rand() % 8 + 8;
    int Monster3Speed = rand() % 8 + 8;

    int Ordre[6] = {MageSpeed, BarbarianSpeed, PriestSpeed, Monster1Speed, Monster2Speed, Monster3Speed};

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