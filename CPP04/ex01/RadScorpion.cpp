/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:02:21 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 20:02:22 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
    return;
}


RadScorpion::RadScorpion(const RadScorpion &src) : Enemy(src)
{
    *this = src;
    return;
}

RadScorpion &      RadScorpion::operator=(RadScorpion const &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        this->_hp = rhs._hp;
        this->_type = rhs._type;
    }
    return *this;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
    return;
}
