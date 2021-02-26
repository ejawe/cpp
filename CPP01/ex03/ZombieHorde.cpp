/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 16:05:58 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/06 16:17:22 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

std::string getRandomName()
{
    std::string randomName;
    std::string	tabName [] = {"Jik", "Mop", "Fad", "Crus", "Rok", "Aro", "Qim"};
    randomName = tabName[rand() % 7];
    return randomName;
}

ZombieHorde::ZombieHorde(int n) : _n(n)
{
    int i = 0;
	
    _zombie = new Zombie[n];
    while (i < n)
    {
        _zombie[i] = Zombie(getRandomName(), "Scary");
        i++;
    }
    return;
}

void    ZombieHorde::announce() const
{
    int i = 0;
    while (i < _n)
    {
       _zombie[i].advert();
       i++;
    }
}

ZombieHorde::~ZombieHorde()
{
    delete[] _zombie;
    return;
}