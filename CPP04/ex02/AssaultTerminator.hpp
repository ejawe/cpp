/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:44:11 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/23 13:44:12 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULT_TERMINATOR_H
#define ASSAULT_TERMINATOR_H

#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{

public:
    AssaultTerminator();
    AssaultTerminator(const AssaultTerminator &src);
    AssaultTerminator &operator=(const AssaultTerminator &rhs);
    virtual ~AssaultTerminator();
    
    virtual ISpaceMarine* clone() const;
    virtual void battleCry() const;
    virtual void rangedAttack() const;
    virtual void meleeAttack() const;

};

#endif