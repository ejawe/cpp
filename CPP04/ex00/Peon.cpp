/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:03:07 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 20:03:08 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon() : Victim()
{

}

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
    return;
}

Peon::Peon(const Peon &src)
{
    *this = src;
    return;
}

Peon &      Peon::operator=(Peon const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        this->_name = rhs._name;
    }
    return *this;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
    return;
}

void            Peon::getPolymorphed() const
{
    std::cout << _name << " was just polymorphed into a pink pony!" << std::endl;
    return;
}

std::ostream & operator<<( std::ostream &o, Peon const &rhs)
{
    o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
    return o;
}