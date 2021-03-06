/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:03:01 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/02 11:50:29 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Neon.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Neon rob("Rob");
    Victim *james = new Peon("James");

    std::cout << "-------------" << std::endl;
    std::cout << robert << jim << joe << *james << rob;
    std::cout << "-------------" << std::endl;

    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(*james);
    robert.polymorph(rob);

    delete james;
    return 0;
}