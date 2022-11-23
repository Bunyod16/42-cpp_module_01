#include <iostream>
#include "Zombie.hpp"

int main(void) {
    Zombie *z;
    z = newZombie("Jack");
    z->announce();
    delete(z);
    randomChump("Ben");
}