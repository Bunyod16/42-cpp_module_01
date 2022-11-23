#include <iostream>
#include "Zombie.hpp"

int main(void) {
    Zombie  *z;
    int     n;

    n = 5;
    z = zombieHorde(n, "Uncle");
    delete [] z;
}