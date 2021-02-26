#ifndef I_METERIA_SOURCE_H
# define I_METERIA_SOURCE_H

#include "AMateria.hpp"
# include <iostream>
# include <string>

class IMateriaSource
{

public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* src) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;

};

#endif