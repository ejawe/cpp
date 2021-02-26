/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 14:02:14 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/06 16:28:15 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("Lorf"), _type("Boudiné")
{
    // std::cout << "Conctructor Zombie() call" << std::endl;
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
    // std::cout << "Conctructor Zombie(name, type) call" << std::endl;
}

Zombie::~Zombie()
{
    // std::cout << "Destructor Zombie call" << std::endl;
}

void    Zombie::advert()
{
    std::cout <<"<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
    return;
}