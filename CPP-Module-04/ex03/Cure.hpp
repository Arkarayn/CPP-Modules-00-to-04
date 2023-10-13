#pragma once

#include "AMateria.hpp"

class Cure : public AMateria {
    public:
    Cure( );
    ~Cure ( );

    Cure& operator=(const Cure &);
    virtual AMateria* clone( ) const;
    void use(ICharacter& target);
};