#pragma once

#include "AMateria.hpp"

class Ice : public AMateria {
    public:
    Ice( );
    ~Ice ( );

    Ice& operator=(const Ice &);
    virtual AMateria* clone( ) const;
    void use(ICharacter& target);
};