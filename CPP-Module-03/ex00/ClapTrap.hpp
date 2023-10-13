#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        ClapTrap(); // Default constructor
        ~ClapTrap(); // Destructor

        ClapTrap(std::string name); // Name constructor

        void attack(std::string const & target); // Attacks target
        void takeDamage(unsigned int amount); // Takes damage
        void beRepaired(unsigned int amount); // Repairs hit points
}