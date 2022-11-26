#ifndef HARL_CLASS_H
# define HARL_CLASS_H

#include <iostream>

class Harl {
    public:
        void complain( std::string level );

    private:
        struct pair{             
            std::string level;
            void    (Harl::*f)( void ) const;
        };
        void debug( void ) const;
        void info( void ) const;
        void warning( void ) const;
        void error( void ) const;
};

#endif