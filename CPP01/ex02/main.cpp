/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 14:01:55 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/09 16:18:11 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    ZombieEvent event;
    std::cout << "------------------------------------------event" << std::endl;
    Zombie *zombie;
    std::cout << "------------------------------------------*zombie" << std::endl;
    Zombie zombie2;
    std::cout << "------------------------------------------zombie2" << std::endl;


    event.setZombieType("Chouflu");
    std::cout << "------------------------------------------event.setZombieType" << std::endl;
    zombie = event.newZombie("Poirot");
    std::cout << "------------------------------------------newZombie" << std::endl;
    zombie2.advert();
    std::cout << "------------------------------------------advert.zombie2" << std::endl;
    zombie->advert();
    std::cout << "------------------------------------------zombie->advert" << std::endl;
    delete zombie;
    std::cout << "------------------------------------------delete zombie" << std::endl;

    event.setZombieType("Scary");
    std::cout << "------------------------------------------event.setZombieType" << std::endl;
    event.randomChump();
    std::cout << "------------------------------------------event.randomChump" << std::endl;
    return (0);
}