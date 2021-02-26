/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:41:35 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 19:41:36 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _xp(0)
{

}

AMateria::AMateria(const AMateria &src)
{
    *this = src;
    return;
}

AMateria & AMateria::operator=(const AMateria &rhs)
{
    if(this != &rhs)
    {
        this->_xp = rhs._xp;
    }
    return *this;
}

AMateria::AMateria(std::string const & type) : _xp(0), _type(type)
{

}

AMateria::~AMateria()
{

}

void        AMateria::use(ICharacter& target)
{
	this->_xp += 10;
    (void)target;
	return;
}

unsigned int            AMateria::getXP() const
{
    return this->_xp;
}

std::string const &     AMateria::getType() const
{
    return this->_type;
}