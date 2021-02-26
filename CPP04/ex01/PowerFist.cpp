/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:02:11 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 20:02:12 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{

}


PowerFist::PowerFist(const PowerFist &src) : AWeapon(src)
{
    *this = src;
    return;
}

PowerFist &      PowerFist::operator=(PowerFist const &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        this->_name = rhs._name;
        this->_apcost = rhs._apcost;
        this->_damage = rhs._damage;
    }
    return *this;
}

PowerFist::~PowerFist()
{

}

void    PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM ! *" << std::endl;
    return;
}
