#pragma once

#include "AMateria.hpp"

class AMateria;

class Character : public ICharacter {
    private:
        AMateria *_inventor[4];
        AMateria *_drop[1024];
        std::string _name;
    public:
        Character( const std::string & );
        Character (const Character &);

        Character& operator= (const Character &);

        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};