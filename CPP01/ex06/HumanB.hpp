/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:03:15 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/07 17:03:20 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{

private:
    std::string _name;
    Weapon      *_weaponB;

public:
    HumanB(std::string name);
    ~HumanB();
    void    setWeapon(Weapon &weapon);
    void    attack() const;

};

#endif