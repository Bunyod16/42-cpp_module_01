#ifndef HUMAN_A_CLASS_H
# define HUMAN_A_CLASS_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        void    attack();
    private:
        std::string name;
        Weapon      *weapon;
};

#endif