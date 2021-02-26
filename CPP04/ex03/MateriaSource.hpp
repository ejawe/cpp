#ifndef METERIA_SOURCE_H
# define METERIA_SOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

private:
	AMateria	*_materia[4];
	int			_index;

public:
	MateriaSource();
	virtual ~MateriaSource();
    MateriaSource(const MateriaSource &src);
    MateriaSource &operator=(const MateriaSource &rhs);

	virtual void 		learnMateria(AMateria* src);
	virtual AMateria* 	createMateria(std::string const & type);
	void				deleteMateriaSource();
};

#endif