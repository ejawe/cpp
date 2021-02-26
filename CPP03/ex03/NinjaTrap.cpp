/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:37:06 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/18 17:37:07 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap()
{
    std::cout << "<Chargement du jeu NinjaTrap>" << std::endl;
    _hitPoints = 60;
    _maxHitPoints = 60;
    _energiePoints = 120;
    _maxEnergyPoints = 120;
    _level = 1;
    _name = "New player";
    _meleeAttackDamage = 60;
    _rangedAttackDamage = 5;
    _armorDamageReduction = 0;
    return;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
    std::cout << "<Chargement du jeu NinjaTrap>" << std::endl;
    _hitPoints = 60;
    _maxHitPoints = 60;
    _energiePoints = 120;
    _maxEnergyPoints = 120;
    _level = 1;
    _name = name;
    _meleeAttackDamage = 60;
    _rangedAttackDamage = 5;
    _armorDamageReduction = 0;
    return;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
    std::cout << "<Nouveau joueur NinjaTrap : chargement du jeu>" << std::endl;
    *this = src;
    return;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "<Fin du jeu NinjaTrap>" << std::endl;
    return;
}

NinjaTrap &     NinjaTrap::operator=(NinjaTrap const &rhs)
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

void    NinjaTrap::rangedAttack(std::string const & target)
{
    std::cout << "Ninja-TP [" << _name << "] attaque [" <<  target << "] à distance , causant [" << _rangedAttackDamage << "] points de dégâts." << std::endl;
    return;
}

void    NinjaTrap::meleeAttack(std::string const & target)
{
    std::cout << "Ninja-TP [" << _name << "] attaque [" <<  target << "] à distance , causant [" << _meleeAttackDamage << "] points de dégâts." << std::endl;
    return;
}

void    NinjaTrap::ninjaShoeBox(ClapTrap &target)
{
    std::cout << "Ninja-TP [" << _name << "] isole [" <<  target.getName() << "]"<< std::endl;
    return;
}

void    NinjaTrap::ninjaShoeBox(FragTrap &target)
{
    std::cout << "Ninja-TP [" << _name << "] frappe [" <<  target.getName() << "]"<< std::endl;
    return;
}

void    NinjaTrap::ninjaShoeBox(ScavTrap &target)
{
    std::cout << "Ninja-TP [" << _name << "] mord [" <<  target.getName() << "]"<< std::endl;
    return;
}

void    NinjaTrap::ninjaShoeBox(NinjaTrap &target)
{
    std::cout << "Ninja-TP [" << _name << "] pince [" <<  target.getName() << "]"<< std::endl;
    return;
}