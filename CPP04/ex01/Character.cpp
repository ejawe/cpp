/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:01:36 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 20:01:37 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{

}

Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(NULL)
{

}

Character::Character(const Character &src)
{
    *this = src;
    return;
}

Character &      Character::operator=(Character const &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
    if(this != &rhs)
    {
        this->_name = rhs._name;
        this->_ap= rhs._ap;
    }
    return *this;
}

Character::~Character()
{

}

void    Character::recoverAP()
{
    _ap += 10;
    if (_ap > 40)
        _ap = 40;
    return;
}

void    Character::equip(AWeapon* weapon)
{
    _weapon = weapon;
    return;
}

void    Character::attack(Enemy* &enemy)
{
    if (!_weapon)
    {
        std::cout << "Attack is impossible: No weapon to attack" << std::endl;
        return;
    }
    if (!enemy)
    {
        std::cout << "Attack is impossible: No enemy here" << std::endl;
        return;
    }
    if (_ap < _weapon->getAPCost())
    {
        std::cout << "Attack is impossible: Not enough Action points" << std::endl;
        return;
    }
    _ap -= _weapon->getAPCost();
    if (_ap < 0)
        _ap = 0;
    
    std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
    _weapon->attack();

    enemy->takeDamage(_weapon->getDamage());
    if (enemy->getHP() == 0)
    {
        std::cout << "It's over for " << enemy->getType() << ". RIP" << std::endl;
        delete enemy;
        enemy = NULL;
    }
        
    return;
}

const std::string   Character::getName() const
{
    return this->_name;
}
int                 Character::getAP() const
{
    return this->_ap;
}
AWeapon*            Character::getWeapon() const
{
    return this->_weapon;
}

std::ostream & operator<<( std::ostream &o, Character const &rhs)
{
    if (rhs.getWeapon())
        o << rhs.getName() << " has " << rhs.getAP() << " AP and carries a " << rhs.getWeapon()->getName() <<std::endl;
    else
        o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" <<std::endl;
    return o;
}