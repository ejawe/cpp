/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:44:05 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/23 13:44:06 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
    return;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src)
{
    std::cout << "* teleports from space *" << std::endl;
    *this = src;
    return;
}


AssaultTerminator      &AssaultTerminator::operator=(const AssaultTerminator &rhs)
{
    (void)rhs;
    return *this;
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back ..." << std::endl;
    return;
}

ISpaceMarine* AssaultTerminator::clone() const
{
    AssaultTerminator *assault = new AssaultTerminator(*this);
    return assault;
}


void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. Purify it !" << std::endl;
    return;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout <<  "* does nothing *" << std::endl;
    return;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout <<  "* attaque with chainfists *" << std::endl;
    return;
}