#include "ScavTrap.hpp"

int main(){
    ClapTrap clapTrap("ClapTrap");
    ScavTrap scavTrap("ScavTrap");

    clapTrap.attack("target");
    scavTrap.attack(clapTrap.getName());
    clapTrap.takeDamage(scavTrap.getAttackDamage());
    scavTrap.guardGate();
    return (0);
}