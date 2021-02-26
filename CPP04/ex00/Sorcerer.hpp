/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:03:22 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 20:03:23 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SOCERER_H
# define SOCERER_H

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{

private:
    std::string _name;
    std::string _type;
    Sorcerer();

public:
    
    Sorcerer(std::string name, std::string type);
    Sorcerer(const Sorcerer &src);
    ~Sorcerer();
    Sorcerer &operator=(Sorcerer const &rhs);

    const std::string     getName(void) const;
    const std::string     getType(void) const;

    void polymorph(Victim const &victim) const;

};

std::ostream & operator<<( std::ostream &o, Sorcerer const &rhs);

#endif