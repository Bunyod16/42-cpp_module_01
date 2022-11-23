#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>

class Zombie {
    public:
        void announce(void);
        void setname(std::string name);
        Zombie(std::string name);
        ~Zombie(void);
        Zombie();

    private:
        std::string name;
};

Zombie *zombieHorde(int n, std::string name);

#endif