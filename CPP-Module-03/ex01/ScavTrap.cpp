#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    return (*this);
}

void ScavTrap::attack(std::string const &target)
{
    if(this->_hitPoints <= 0)
    {
        std::cout << MAGENTA "ScavTrap " << this->_name << " has no hit points left!" RESET << std::endl;
        return ;
    }
    if(this->_energyPoints <= 0)
    {
        std::cout << MAGENTA "ScavTrap " << this->_name << " has no energy points left!" RESET << std::endl;
        return ;
    }
    std::cout << MAGENTA "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" RESET << std::endl;
    this->_energyPoints--;
}

void ScavTrap::guardGate()
{
    std::cout << BLUE "ScavTrap " << this->_name << " has entered in Gate keeper mode" RESET << std::endl;
}

