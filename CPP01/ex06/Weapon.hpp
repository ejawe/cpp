/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:03:34 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/07 17:03:36 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{

private:
    std::string _type;

public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    std::string const& getType() const;
    void    setType(std::string type);
};

#endif