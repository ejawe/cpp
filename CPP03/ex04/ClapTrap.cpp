/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:43:54 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/18 17:43:55 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
_hitPoints(100),
_maxHitPoints(100),
_energiePoints(100),
_maxEnergyPoints(100),
_level(1),
_name("New player"),
_meleeAttackDamage(30),
_rangedAttackDamage(20),
_armorDamageReduction(5)
{
    std::cout << "<Chargement du jeu ClapTrap>" << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name) :
_hitPoints(100),
_maxHitPoints(100),
_energiePoints(100),
_maxEnergyPoints(100),
_level(1),
_name(name),
_meleeAttackDamage(30),
_rangedAttackDamage(20),
_armorDamageReduction(5)
{
    std::cout << "<Chargement du jeu ClapTrap>" << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "<Nouveau joueur ClapTrap: chargement du jeu>" << std::endl;
    *this = src;
    return;
}

ClapTrap::~ClapTrap()
{
    std::cout << "<Fin du jeu ClapTrap>" << std::endl;
    return;
}

ClapTrap &     ClapTrap::operator=(ClapTrap const &rhs)
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

void    ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "CLAP-TP [" << _name << "] attaque [" <<  target << "] à distance , causant [" << _rangedAttackDamage << "] points de dégâts." << std::endl;
    return;
}

void    ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "CLAP-TP [" << _name << "] attaque [" <<  target << "] à distance , causant [" << _meleeAttackDamage << "] points de dégâts." << std::endl;
    return;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    int newScore = _hitPoints - (amount - _armorDamageReduction);
    if (newScore < 0)
        _hitPoints = 0;
    else
        _hitPoints = newScore;
    std::cout << "CLAP-TP [" << _name << "] se protège avec l'armure : réduction dégâts de [" << _armorDamageReduction << " points]" << std::endl;
    std::cout << "CLAP-TP [" << _name << "] pert [" << (amount - _armorDamageReduction) << "] points de dégâts." << std::endl;
    std::cout << "Nouveau score : [" << _hitPoints << "]" << std::endl;
    return;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    _hitPoints += amount;
    _energiePoints += amount;
    if (_hitPoints > _maxHitPoints)
        _hitPoints = _maxHitPoints;
    if (_energiePoints > _maxEnergyPoints)
        _energiePoints = _maxEnergyPoints;
    std::cout << "CLAP-TP [" << _name << "] gagne [" << amount << "] points de dégâts : total = [" << _hitPoints << "]" << std::endl;
    std::cout << "CLAP-TP [" << _name << "] gagne [" << amount << "] points d'énergie : total = [" << _energiePoints << "]" << std::endl;
    return;
}

std::string ClapTrap::getName() const
{
    return this->_name;
}

int     ClapTrap::getHitPoints() const
{
    return this->_hitPoints;
}
int     ClapTrap::getMaxHitPoints() const
{
    return this->_maxHitPoints;
}
int     ClapTrap::getEnergiePoints() const
{
    return this->_energiePoints;
}
int     ClapTrap::getMaxEnergiePoints() const
{
    return this->_maxEnergyPoints;
}
int     ClapTrap::getMeleeAttackDamage() const
{
    return this->_meleeAttackDamage;
}
int     ClapTrap::getRangedAttackDamage() const
{
    return this->_rangedAttackDamage;
}
int     ClapTrap::getArmorDamageReduction() const
{
    return this->_armorDamageReduction;
}