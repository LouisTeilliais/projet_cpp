#include <cstdlib>
#include <ctime>
#include <iostream>
#include "../hpp/character.hpp"
#include "../hpp/Barbarian.hpp"
#include "../hpp/Mage.hpp"
#include "../hpp/potion.hpp"
#include "../hpp/exception.hpp"
#include "../hpp/Priest.hpp"
#include "../hpp/Monster.hpp"


using namespace std;

int main(int argc, char const *argv[]){

    srand(time(NULL));
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

    


    

    return 0;
}