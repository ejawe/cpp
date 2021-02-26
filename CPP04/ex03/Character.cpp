#include "Character.hpp"

Character::Character()
{

}

Character::Character(std::string name) : _index(0), _name(name)
{
	int i = 0;

	while (i < 4)
	{
		_stock[i] = NULL;
		i++;
	}
	return;
}

Character::Character(const Character &src)
{
	this->operator=(src);
    return;
}

Character & Character::operator=(const Character &rhs)
{
    if(this != &rhs)
    {
        this->_index = rhs._index;
		this->_name = rhs._name;
		std::cout << "ok" << std::endl;
		this->deleteCharacter();
		std::cout << "ok" << std::endl;
		int i = 0;
		while (i < 4)
		{
			this->_stock[i] = rhs._stock[i];
			i++;
		}
    }
    return *this;
}

Character::~Character()
{
	this->deleteCharacter();
	return;
}

void	Character::equip(AMateria* m)
{
	if (this->_index > 3 || !m)
		return;
	this->_stock[this->_index] = m;
	this->_index++;
	return;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;
	if (this->_index >= idx)
		this->_stock[idx] = NULL;
	return;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || this->_stock[idx] == NULL)
		return;
	if (this->_index >= idx)
		this->_stock[idx]->use(target);
	return;
}

void	Character::deleteCharacter()
{
	int i = 0;
	
	while (i < this->_index)
	{
		if (this->_stock[i] != NULL)
		{
			// delete this->_stock[i];
			this->_stock[i] = NULL;
		}
		i++;
	}
	return;
}

std::string	const	&Character::getName() const
{
	return this->_name;
}