#include <iostream>
#include "Harl.hpp"

void    Harl::complain( std::string level ) {
    pair    pairList[4];
    int     i;

    pairList[0].level = "DEBUG";
    pairList[0].f = &Harl::debug;
    pairList[1].level = "INFO";
    pairList[1].f = &Harl::info;
    pairList[2].level = "WARNING";
    pairList[2].f = &Harl::warning;
    pairList[3].level = "ERROR";
    pairList[3].f = &Harl::error;

    i = -1;
    while (++i < 4) {
        if (pairList[i].level == level) {
            void (Harl::*call)(void) const = pairList[i].f;
            (this->*call)();
        }  
    }
}

void    Harl::debug( void ) const {
    std::cout << "[DEBUG]: " << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void    Harl::info( void ) const {
    std::cout << "[INFO]: " << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning( void ) const {
    std::cout << "[WARNING]: " << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void ) const {
    std::cout << "[ERROR]: " << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
