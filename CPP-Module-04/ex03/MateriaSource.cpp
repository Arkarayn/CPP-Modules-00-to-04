#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    std::cout << "MateriaSource constuctor call" << std::endl;
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &raw) {
    std::cout << "MateriaSource copy constuctor call" << std::endl;
    for (int i = 0; i < 4; i++)
        _materia[i] = raw._materia[i];
}

MateriaSource::~MateriaSource() {
    std::cout << "MateriaSource destructor call" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (_materia[i] != NULL)
            delete _materia[i];
    }
}

void MateriaSource::learnMateria(AMateria* materia) {
    int i;

    if (!materia)
        return ;
    for (i = 0; i < 4 && _materia[i] != NULL; )
        i++;
    if (i < 4)
        _materia[i] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++)
        if (_materia[i] && _materia[i]->getType() == type)
            return (_materia[i]->clone( ));
    return (NULL);
}