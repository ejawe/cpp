#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{

private:
    unsigned int    _xp;
    std::string     _type;

protected:
    AMateria();

public:
    AMateria(const AMateria &src);
    AMateria &operator=(const AMateria &rhs);
    AMateria(std::string const & type);
    virtual ~AMateria();

    std::string const & getType() const;
    unsigned int        getXP() const;
    virtual AMateria*   clone() const = 0;
    virtual void        use(ICharacter& target);

};


#endif