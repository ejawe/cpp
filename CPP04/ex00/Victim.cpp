/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:03:27 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 20:03:28 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{

}

Victim::Victim(std::string name) : _name(name)
{
    std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
    return;
}

Victim::Victim(const Victim &src)
{
    *this = src;
    return;
}

Victim &      Victim::operator=(Victim const &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        this->_name = rhs._name;
    }
    return *this;
}

Victim::~Victim()
{
    std::cout << "The victim " << _name << " died for no apparent reasons!" << std::endl;
    return;
}

const std::string   Victim::getName(void) const
{
    return this->_name;
}

void            Victim::getPolymorphed() const
{
    std::cout << _name << " was just polymorphed in a cute little sheep!" << std::endl;
    return;
}

std::ostream & operator<<( std::ostream &o, Victim const &rhs)
{
    o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
    return o;
}