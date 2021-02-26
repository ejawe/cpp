/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:28:37 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/18 17:28:38 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : 
_hitPoints(100),
_maxHitPoints(100),
_energiePoints(50),
_maxEnergyPoints(50),
_level(1),
_name("New player"),
_meleeAttackDamage(20),
_rangedAttackDamage(15),
_armorDamageReduction(3)
{
    std::cout << "<Chargement du jeu ScavTrap>" << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name) : 
_hitPoints(100),
_maxHitPoints(100),
_energiePoints(50),
_maxEnergyPoints(50),
_level(1),
_name(name),
_meleeAttackDamage(20),
_rangedAttackDamage(15),
_armorDamageReduction(3)
{
    std::cout << "<Chargement du jeu ScavTrap>" << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
    std::cout << "<Nouveau joueur ScavTrap : chargement du jeu>" << std::endl;
    *this = src;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << "<Fin du jeu ScavTrap>" << std::endl;
    return;
}

ScavTrap &     ScavTrap::operator=(ScavTrap const &rhs)
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

void    ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "Scav [" << _name << "] attaque [" <<  target << "] à distance , causant [" << _rangedAttackDamage << "] points de dégâts." << std::endl;
    return;
}

void    ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "Scav [" << _name << "] attaque [" <<  target << "] à distance , causant [" << _meleeAttackDamage << "] points de dégâts." << std::endl;
    return;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    int newScore = _hitPoints - (amount - _armorDamageReduction);
    if (newScore < 0)
        _hitPoints = 0;
    else
        _hitPoints = newScore;
    std::cout << "Scav [" << _name << "] se protège avec l'armure : réduction dégâts de [" << _armorDamageReduction << " points]" << std::endl;
    std::cout << "Scav [" << _name << "] pert [" << (amount - _armorDamageReduction) << "] points de dégâts." << std::endl;
    std::cout << "Nouveau score : [" << _hitPoints << "]" << std::endl;
    return;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    _hitPoints += amount;
    _energiePoints += amount;
    if (_hitPoints > _maxHitPoints)
        _hitPoints = _maxHitPoints;
    if (_energiePoints > _maxEnergyPoints)
        _energiePoints = _maxEnergyPoints;
    std::cout << "Scav [" << _name << "] gagne [" << amount << "] points de dégâts : total = [" << _hitPoints << "]" << std::endl;
    std::cout << "Scav [" << _name << "] gagne [" << amount << "] points d'énergie : total = [" << _energiePoints << "]" << std::endl;
    return;
}

std::string getRandomChallenge()
{
    std::string randomAttack;
    std::string	tabAttack [] = {"Duel à main nues", "Bataille de boue", "Vicking challenge", "Cache cache challenge", "Battle de rap"};
    randomAttack = tabAttack[rand() % 5];
    return randomAttack;
}

void    ScavTrap::challengeNewcomer(std::string const & target)
{
    std::cout << "Scav [" << _name << "] challenge [" <<  target << "]" << " pour un(e) [" << getRandomChallenge() << "]" <<std::endl;
    return;
}