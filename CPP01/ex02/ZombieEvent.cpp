/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 13:57:20 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/06 16:12:39 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie  *ZombieEvent::newZombie(std::string name)
{
    Zombie *newZombie = new Zombie(name, this->_type);
    return (newZombie);
}

void    ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
    return;
}

void    ZombieEvent::randomChump(void)
{
	std::string randomName;
	std::string	tabName [] = {"Jik", "Mop", "Fad", "Crus", "Rok", "Aro", "Qim"};

	randomName = tabName[rand() % 7];
	Zombie zombie(randomName, this->_type);
	zombie.advert();
}