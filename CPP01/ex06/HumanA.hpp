/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 16:54:41 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/09 16:54:42 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{

private:
    std::string _name;
    Weapon      &_weaponA;
    
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void    attack() const;

};

#endif