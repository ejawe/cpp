/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:43:59 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/18 17:44:00 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP
# define CLAP_TRAP

#include <string>
#include <iostream>

class ClapTrap
{

private:

protected:
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
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &src);
    ~ClapTrap();

    ClapTrap &  operator=(ClapTrap const &rhs);

    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    
    std::string getName() const;
    int     getHitPoints() const;
    int     getMaxHitPoints() const;
    int     getEnergiePoints() const;
    int     getMaxEnergiePoints() const;
    int     getMeleeAttackDamage() const;
    int     getRangedAttackDamage() const;
    int     getArmorDamageReduction() const;
};

#endif