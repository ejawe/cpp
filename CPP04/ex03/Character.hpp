#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"


class Character : public ICharacter
{

private:
	int			_index;
	AMateria	*_stock[4];
	std::string	_name;
	Character();

public:
	Character(std::string name);
    Character(const Character &src);
    Character &operator=(const Character &rhs);
	virtual ~Character();

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	void	deleteCharacter();
};

#endif