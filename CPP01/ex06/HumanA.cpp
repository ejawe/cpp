/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:54:49 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/09 16:54:50 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weaponA(weapon)
{
}

HumanA::~HumanA()
{ 
}

void    HumanA::attack() const
{
    std::cout << _name << " attacks with his " << _weaponA.getType() << std::endl;
    return;
}