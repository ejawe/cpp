/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 17:28:42 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/18 17:28:43 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP
# define FRAG_TRAP

#include <string>
#include <iostream>

class FragTrap
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
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &src);
    ~FragTrap();

    FragTrap &  operator=(FragTrap const &rhs);

    void    rangedAttack(std::string const & target);
    void    meleeAttack(std::string const & target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    void    vaulthunter_dot_exe(std::string const & target);

};

#endif