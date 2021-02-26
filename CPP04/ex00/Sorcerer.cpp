/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:03:16 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 20:03:17 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{

}

Sorcerer::Sorcerer(std::string name, std::string type) : _name(name), _type(type)
{
    std::cout << _name << ", " << _type << ", is born!" << std::endl;
    return;
}

Sorcerer::Sorcerer(const Sorcerer &src)
{
    *this = src;
    return;
}

Sorcerer &      Sorcerer::operator=(Sorcerer const &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        this->_name = rhs._name;
        this->_type = rhs._type;
    }
    return *this;
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", " << _type << ", is dead. Consequences will never be the same!" << std::endl;
    return;
}

const std::string     Sorcerer::getName(void) const
{
    return this->_name;
}

const std::string     Sorcerer::getType(void) const
{
    return this->_type;
}

void Sorcerer::polymorph(Victim const &victim) const
{
    victim.getPolymorphed();
    return;
}

std::ostream & operator<<( std::ostream &o, Sorcerer const &rhs)
{
    o << "I am " << rhs.getName() << ", " << rhs.getType() << " and i like ponies!" << std::endl;
    return o;
}