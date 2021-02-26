/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:42:28 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 19:42:29 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _index(0)
{
	int i = 0;

	while (i < 4)
	{
		_materia[i] = NULL;
		i++;
	}
	return;
}

MateriaSource::~MateriaSource()
{
	this->deleteMateriaSource();
	return;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	int i = 0;

	while (i < 4)
	{
		_materia[i] = NULL;
		i++;
	}
	*this = src;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &rhs)
{
    if(this != &rhs)
    {
        this->deleteMateriaSource();
		this->_index = rhs._index;
		int i = 0;
		while (i < 4)
		{
			this->_materia[i] = rhs._materia[i];
			i++;
		}
    }
    return *this;
}

void 		MateriaSource::learnMateria(AMateria* src)
{
	int i = 0;

	if (this->_index == 3 || !src)
		return;
	while (i < _index)
	{
		if (src->getType() == this->_materia[i]->getType())
			return;
		i++;
	}
	this->_materia[this->_index] = src;
	this->_index++;
	return;
}

AMateria* 	MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (i < _index)
	{
		if (type == this->_materia[i]->getType())
			return(this->_materia[i]->clone());
		i++;
	}
	return NULL;
}

void		MateriaSource::deleteMateriaSource()
{
	int i = 0;

	while (i < _index)
	{
		delete this->_materia[i];
		this->_materia[i] = NULL;
		i++;
	}
	return;
}
