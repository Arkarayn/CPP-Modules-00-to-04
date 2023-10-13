#include "Zombie.hpp"

int main()
{
    Zombie *zombie = new Zombie("Zombie1");
    zombie->announce();
    delete zombie;
    randomChump("Zombie2");
    return (0);
}