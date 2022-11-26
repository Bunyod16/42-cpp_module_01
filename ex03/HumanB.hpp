#ifndef HUMAN_B_CLASS_H
# define HUMAN_B_CLASS_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void    attack();
        void    setWeapon(Weapon &weapon);
    private:
        std::string name;
        Weapon      *weapon;
        int         count;
};

#endif