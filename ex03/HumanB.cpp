#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {
    this->count = 0;
}

HumanB::~HumanB(void) {
}

void    HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
    this->count = 1;
}

void    HumanB::attack(void) {
    if (count == 1)
        std::cout << this->name + " attacks with their " + this->weapon->getType() << std::endl;
    else
        std::cout << "Error: " + this->name + " cannot perform attack, no weapon" << std::endl;
}