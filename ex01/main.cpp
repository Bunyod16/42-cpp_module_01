#include <iostream>
#include "Zombie.hpp"

int main(void) {
    Zombie  *z;
    int     n;

    n = 5;
    z = zombieHorde(n, "Uncle");
    int i = -1;
    while (++i < n) {
        z[i].announce();
    }
    delete [] z;
}