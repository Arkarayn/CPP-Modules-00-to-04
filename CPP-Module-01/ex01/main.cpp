#include "Zombie.hpp"

int main()
{
    int n = 6;
    Zombie *horde = zombieHorde(n, "Zombie");
    delete[] horde; 
}