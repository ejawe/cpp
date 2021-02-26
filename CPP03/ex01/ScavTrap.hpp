/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:28:47 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/18 17:28:48 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP
# define SCAV_TRAP

#include <string>
#include <iostream>

class ScavTrap
{
private:
    int _hitPoints;
    int _maxHitPoints;
    int _energiePoints;
    int _maxEnergyPoints;
    int _level;
    std::string _name;
    int _meleeAttackDamage;
    int _rangedAttackDamage;
    int _armorDamageReduction;

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &src);
    ~ScavTrap();

    ScavTrap &  operator=(ScavTrap const &rhs);

    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    void    challengeNewcomer(std::string const & target);
};


#endif