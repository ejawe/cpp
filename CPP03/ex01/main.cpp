/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:28:30 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/18 17:28:31 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    FragTrap minus = FragTrap("Minus");
    ScavTrap cortex = ScavTrap("Cortex");

    minus.meleeAttack("Cortex");
    minus.takeDamage(40);
    minus.vaulthunter_dot_exe("Minus");
    minus.beRepaired(50);

    cortex.takeDamage(30);
    cortex.challengeNewcomer("Minus");
    cortex.challengeNewcomer("Minus");
    cortex.challengeNewcomer("Minus");
    cortex.challengeNewcomer("Minus");
    cortex.challengeNewcomer("Minus");

    return (0);
}
