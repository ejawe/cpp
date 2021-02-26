/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:26:12 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/18 17:26:13 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap minus = FragTrap("Minus");

    minus.meleeAttack("Cortex");
    minus.rangedAttack("Titi");

    minus.takeDamage(40);
    minus.takeDamage(30);
    minus.takeDamage(60);
    minus.beRepaired(50);

    minus.vaulthunter_dot_exe("Grominet");
    minus.vaulthunter_dot_exe("Riri");
    minus.vaulthunter_dot_exe("Fifi");
    minus.vaulthunter_dot_exe("Loulou");
    minus.vaulthunter_dot_exe("Donald");

    minus.beRepaired(50);

    minus.vaulthunter_dot_exe("Donald");
    return (0);
}