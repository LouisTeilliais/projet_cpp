#ifndef START_HPP
#define START_HPP
#include <string>
#include <iostream>
#include <unistd.h>
#include "./character.hpp"
#include "./Mage.hpp"
#include "./Barbarian.hpp"
#include "./Priest.hpp"
#include <bits/stdc++.h>

using namespace std;

class start {
    public :
    string endLine1 = string("\e[1A\e[K");
    void PersoName();
    void Start();
};


#endif