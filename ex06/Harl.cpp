#include <iostream>
#include "Harl.hpp"

void    Harl::complain( std::string level ) {
    std::string levels[4] = {
        "DEBUG", "INFO", "WARNING", "ERROR"
    };
    int     severity;

    severity = -1;
    while (++severity < 4) {
        if (strcmp(level.c_str(), levels[severity].c_str()) == 0)
            break;
    }
    switch (severity) {
        case 0: {
            this->debug();
        }
        case 1: {
            this->info();
        }
        case 2: {
            this->warning();
        }
        case 3: {
            this->error();
            break;
        }
        default: {
            std::cout << "[DEFAULT]: " << "I'm saying this because supplied level doesnt match ['DEBUG', 'WARNING', 'INFO', 'ERROR']" << std::endl;
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
