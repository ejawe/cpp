/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:02:33 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 20:02:35 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Break everything !" << std::endl;
    return;
}


SuperMutant::SuperMutant(const SuperMutant &src) : Enemy(src)
{
    *this = src;
    return;
}

SuperMutant &      SuperMutant::operator=(SuperMutant const &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }
    return *this;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
    return;
}

void    SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
    return;
}