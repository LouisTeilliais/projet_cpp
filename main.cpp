#include <cstdlib>
#include <ctime>
#include <iostream>
#include "./character.hpp"
#include "./Barbarian.hpp"
#include "./Mage.hpp"
#include "./potion.hpp"
#include "./exception.hpp"


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