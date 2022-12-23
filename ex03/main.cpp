#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void) {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    Weapon wpn = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.attack();
    jim.setWeapon(wpn);
    jim.attack();
    wpn.setType("someff other type of club");
    jim.attack();
}