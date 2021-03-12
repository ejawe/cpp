/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerArm.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:09:35 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/02 12:09:37 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerArm.hpp"

PowerArm::PowerArm() : AWeapon("Power Arm", 6, 30)
{

}


PowerArm::PowerArm(const PowerArm &src) : AWeapon(src)
{
    *this = src;
    return;
}

PowerArm &      PowerArm::operator=(PowerArm const &rhs)
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

PowerArm::~PowerArm()
{

}

void    PowerArm::attack() const
{
    std::cout << "* BOOOUM ! *" << std::endl;
    return;
}
