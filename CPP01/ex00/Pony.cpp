/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:15:22 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/04 23:30:04 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string alloc_type, std::string name, std::string color, std::string favoriteMeal) : 
    _allocation(alloc_type),
    _name(name),
    _color(color),
    _favoriteMeal(favoriteMeal)
{
    std::cout << "Constructor called for " << this->_allocation << std::endl;
    return; 
}

Pony::~Pony(void)
{
    std::cout << "Destructor called for " << this ->_allocation << std::endl;
    return;
}

void    Pony::printPony(void) const
{
    std::cout << "name: " << this->_name << std::endl;
    std::cout << "color: " << this->_color << std::endl;
    std::cout << "favorite meal: " << this->_favoriteMeal << std::endl;
    return;
}