#pragma once

#include "ScavTrap.hpp"

#define YELLOW "\033[0;33m"
#define CYAN "\033[0;36m"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &copy);
        ~FragTrap();

        FragTrap &operator=(const FragTrap &copy);
    
        void attack(std::string const &target);
        void highFivesGuys(void);
};