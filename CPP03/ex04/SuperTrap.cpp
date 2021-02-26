/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:44:44 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/18 17:44:44 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : ClapTrap(), NinjaTrap(), FragTrap()
{
    std::cout << "<Chargement du jeu SuperTrap>" << std::endl;
    _hitPoints = FragTrap::_hitPoints;
    _maxHitPoints = FragTrap::_maxHitPoints;
    _energiePoints = NinjaTrap::_energiePoints;
    _maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
    _level = 1;
    _name = "New player";
    _meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
    _rangedAttackDamage = FragTrap::_rangedAttackDamage;
    _armorDamageReduction = FragTrap::_armorDamageReduction;
    return;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
    std::cout << "<Chargement du jeu SuperTrap>" << std::endl;
    _hitPoints = FragTrap::_hitPoints;
    _maxHitPoints = FragTrap::_maxHitPoints;
    _energiePoints = NinjaTrap::_energiePoints;
    _maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
    _level = 1;
    _name = name;
    _meleeAttackDamage = NinjaTrap::_meleeAttackDamage;
    _rangedAttackDamage = FragTrap::_rangedAttackDamage;
    _armorDamageReduction = FragTrap::_armorDamageReduction;
    return;
}

SuperTrap::SuperTrap(SuperTrap const &src)
{
    std::cout << "<Nouveau joueur SuperTrap : chargement du jeu>" << std::endl;
    *this = src;
    return;
}

SuperTrap::~SuperTrap()
{
    std::cout << "<Fin du jeu SuperTrap>" << std::endl;
    return;
}

SuperTrap &     SuperTrap::operator=(SuperTrap const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        this->_hitPoints = rhs._hitPoints;
        this->_maxHitPoints = rhs._maxHitPoints;
        this->_energiePoints = rhs._energiePoints;
        this->_maxEnergyPoints = rhs._maxEnergyPoints;
        this->_level = rhs._level;
        this->_name = rhs._name;
        this->_meleeAttackDamage = rhs._meleeAttackDamage;
        this->_rangedAttackDamage = rhs._rangedAttackDamage;
        this->_armorDamageReduction = rhs._armorDamageReduction;
    }
    return *this;
}

void    SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
    return;
}

void    SuperTrap::meleeAttack(std::string const & target)
{
    NinjaTrap::rangedAttack(target);
    return;
}
