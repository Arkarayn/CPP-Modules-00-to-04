#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    const WrongAnimal *wrong = new WrongCat();

    std::cout << std::endl;

    j->makeSound(); //will output the cat sound!
    i->makeSound();
    wrong->makeSound();
    meta->makeSound();

    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    delete wrong;

    return (0);
}