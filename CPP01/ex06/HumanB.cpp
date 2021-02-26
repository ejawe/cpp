/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:02:55 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/07 17:03:04 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{ 
}

void    HumanB::setWeapon(Weapon &weapon)
{
    _weaponB = &weapon;
}

void    HumanB::attack() const
{
    std::cout << _name << " attacks with his " << _weaponB->getType() << std::endl;
    return;
}
