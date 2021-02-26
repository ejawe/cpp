/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:42:09 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 19:42:10 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice &src) : AMateria("ice")
{
    *this = src;
    return;
}

Ice & Ice::operator=(const Ice &rhs)
{
    if(this != &rhs)
    {
        AMateria::operator=(rhs);
    }
    return *this;
}

Ice::~Ice()
{

}

AMateria*   Ice::clone() const
{
    Ice *ice = new Ice(*this);
    return ice;
}

void    Ice::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return;
}