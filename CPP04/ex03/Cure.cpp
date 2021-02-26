/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:41:57 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 19:41:58 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure &src) : AMateria("cure")
{
    *this = src;
    return;
}

Cure & Cure::operator=(const Cure &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        AMateria::operator=(rhs);
    }
    return *this;
}

Cure::~Cure()
{

}

AMateria*   Cure::clone() const
{
    Cure *cure = new Cure(*this);
    return cure;
}

void    Cure::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    return;
}