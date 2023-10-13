#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap parameterized constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 5;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    return (*this);
}

void ClapTrap::attack(std::string const &target)
{
    if(this->_hitPoints <= 0)
    {
        std::cout << RED "ClapTrap " << this->_name << " has no hit points left!" RESET << std::endl;
        return ;
    }
    if(this->_energyPoints <= 0)
    {
        std::cout << RED "ClapTrap " << this->_name << " has no energy points left!" RESET << std::endl;
        return ;
    }
    std::cout << RED "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" RESET << std::endl;
    this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->_hitPoints <= 0)
    {
        std::cout << RED "ClapTrap " << this->_name << " is already dead!" RESET << std::endl;
        return ;
    }
    std::cout << RED "ClapTrap " << this->_name << " takes " << amount << " points of damage!" RESET << std::endl;
    this->_hitPoints -= amount;
    if(this->_hitPoints <= 0)
    {
        std::cout << RED "ClapTrap " << this->_name << " has died!" RESET << std::endl;
        return ;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->_hitPoints <= 0)
    {
        std::cout << RED "ClapTrap " << this->_name << " is already dead!" RESET << std::endl;
        return ;
    }
    if(this->_energyPoints <= 0)
    {
        std::cout << RED "ClapTrap " << this->_name << " has no energy points left!" RESET << std::endl;
        return ;
    }
    std::cout << GREEN "ClapTrap " << this->_name << " is repaired for " << amount << " points of health!" RESET << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints--;
    if(this->_hitPoints > 10)
        this->_hitPoints = 10;
}

std::string ClapTrap::getName()
{
    return (this->_name);
}

int ClapTrap::getHitPoints()
{
    return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints()
{
    return (this->_energyPoints);
}

int ClapTrap::getAttackDamage()
{
    return (this->_attackDamage);
}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void ClapTrap::setHitPoints(int hitPoints)
{
    this->_hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
    this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
    this->_attackDamage = attackDamage;
}