#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &copy);
        virtual ~WrongCat();

        WrongCat &operator=(const WrongCat &copy);

        virtual void makeSound() const;
};