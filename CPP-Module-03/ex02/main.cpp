#include "FragTrap.hpp"

int main(){
    ClapTrap clapTrap("ClapTrap");
    ScavTrap scavTrap("ScavTrap");
    FragTrap fragTrap("FragTrap");

    clapTrap.attack("target");
    scavTrap.attack(clapTrap.getName());
    clapTrap.takeDamage(scavTrap.getAttackDamage());
    fragTrap.highFivesGuys();
    scavTrap.guardGate();
    return (0);
}