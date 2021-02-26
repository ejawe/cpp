/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:43:42 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/23 13:43:48 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for action !" << std::endl;
    return;
}

TacticalMarine::TacticalMarine(const TacticalMarine &src)
{
    std::cout << "Tactical Marine ready for action !" << std::endl;
    *this = src;
    return;
}


TacticalMarine      &TacticalMarine::operator=(const TacticalMarine &rhs)
{
    (void)rhs;
    return *this;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh ..." << std::endl;
    return;
}

ISpaceMarine* TacticalMarine::clone() const
{
    TacticalMarine *tactical = new TacticalMarine(*this);
    return tactical;
}


void TacticalMarine::battleCry() const
{
    std::cout << "For the Holy PLOT !" << std::endl;
    return;
}

void TacticalMarine::rangedAttack() const
{
    std::cout <<  "* attacks with a bolter *" << std::endl;
    return;
}

void TacticalMarine::meleeAttack() const
{
    std::cout <<  "* attacks with a chainsword *" << std::endl;
    return;
}