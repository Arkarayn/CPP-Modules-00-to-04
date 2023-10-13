#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <thread>

class Zombie
{
    public:
        Zombie();
        ~Zombie();
        void setName(std::string name);
        void announce(void);
    private:
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
