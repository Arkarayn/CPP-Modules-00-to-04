#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define NUMBER_OF_ANIMALS 4

int	main( void )
{
    const Animal	*animals[NUMBER_OF_ANIMALS];
    //Animal test;

    for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < NUMBER_OF_ANIMALS; i++)
    {
        animals[i]->makeSound();
        delete animals[i];
    }

    return (0);
}