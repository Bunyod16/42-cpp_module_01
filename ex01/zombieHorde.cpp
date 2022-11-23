#include <iostream>
#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name) {
    int i;
    Zombie *z;

    z = new Zombie[n];
    i = -1;
    while (++i < n) {
        z[i].setname(name + std::to_string(i));
        z[i].announce();
    }
    return (z);
}