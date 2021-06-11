#include "../hpp/Start.hpp"

using namespace std;

void start::PersoName(){
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