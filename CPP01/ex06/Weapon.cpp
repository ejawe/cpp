/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:03:24 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/07 17:03:28 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    // std::cout << "Construtor Weapon call" << std::endl;
}

Weapon::Weapon(std::string type) : _type(type)
{
    // std::cout << "Construtor surgargé Weapon call" << std::endl;
}

Weapon::~Weapon()
{

}

std::string const&  Weapon::getType() const
{
    std::string const& refType = _type;
    return refType;
}

void    Weapon::setType(std::string type)
{
    _type = type;
    return ;
}