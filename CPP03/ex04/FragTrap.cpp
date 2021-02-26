/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:44:04 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/18 17:44:05 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "<Chargement du jeu FragTrap>" << std::endl;
    return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "<Chargement du jeu FragTrap>" << std::endl;
    _name = name;
    return;
}

FragTrap::FragTrap(FragTrap const &src)
{
    std::cout << "<Nouveau joueur FragTrap: chargement du jeu>" << std::endl;
    *this = src;
    return;
}

FragTrap::~FragTrap()
{
    std::cout << "<Fin du jeu FragTrap>" << std::endl;
    return;
}

FragTrap &     FragTrap::operator=(FragTrap const &rhs)
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

void    FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP [" << _name << "] attaque [" <<  target << "] à distance , causant [" << _rangedAttackDamage << "] points de dégâts." << std::endl;
    return;
}

void    FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP [" << _name << "] attaque [" <<  target << "] à distance , causant [" << _meleeAttackDamage << "] points de dégâts." << std::endl;
    return;
}

std::string getRandomName()
{
    std::string randomAttack;
    std::string	tabAttack [] = {"Boule de feu", "Lancé de champignon", "Laser trachant", "Coup de poing", "Tourbillon fatal"};
    randomAttack = tabAttack[rand() % 5];
    return randomAttack;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (_energiePoints < 25)
    {
        std::cout << "FR4G-TP ["<< _name << "] n'a pas assez d'énergie : Attaque imposible." << std::endl;
        return;
    }
    int newScore = _energiePoints - 25;
    if (newScore < 0)
        _energiePoints = 0;
    else
        _energiePoints = newScore;
    std::cout << "FR4G-TP [" << _name << "] attaque [" <<  target << "] à distance , en mode [" << getRandomName() << "]" << std::endl;
    return;
}