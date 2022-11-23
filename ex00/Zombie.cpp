#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name(name) {
    std::cout << this->name << " created" << std::endl;
}

void Zombie::announce( void ) {
    std::cout << this->name + ": " + "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << this->name << " is destroyed" << std::endl;
}