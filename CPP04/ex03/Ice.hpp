#ifndef ICE_H
# define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{

public:
    Ice();
    Ice(const Ice &src);
    Ice &operator=(const Ice &rhs);
    virtual ~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

};

#endif