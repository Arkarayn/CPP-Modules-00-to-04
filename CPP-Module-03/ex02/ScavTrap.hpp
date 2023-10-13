#pragma once

#include <iostream>
#include "ClapTrap.hpp"

#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &copy);
        ~ScavTrap();

        ScavTrap &operator=(const ScavTrap &copy);
    
        void attack(std::string const &target);
        void guardGate();
};