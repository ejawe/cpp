/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:44:15 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/18 17:50:54 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
    FragTrap minus = FragTrap("Minus");
    ScavTrap cortex = ScavTrap("Cortex");
    NinjaTrap lulu = NinjaTrap("Lulu");
    ClapTrap baron = ClapTrap("Baron");
    SuperTrap super = SuperTrap("Super");

    minus.meleeAttack("Cortex");
    minus.takeDamage(40);
    minus.vaulthunter_dot_exe("Minus");
    minus.beRepaired(50);

    cortex.takeDamage(30);
    
    lulu.ninjaShoeBox(minus);
    lulu.ninjaShoeBox(cortex);
    lulu.ninjaShoeBox(baron);

    lulu.rangedAttack("Super");
    super.takeDamage(30);
    super.vaulthunter_dot_exe("Lulu");
    return (0);
}
