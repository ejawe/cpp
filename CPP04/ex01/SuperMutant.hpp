/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:02:38 by ejawe             #+#    #+#             */
/*   Updated: 2021/02/26 20:02:39 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_H
# define SUPERMUTANT_H

#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{

private:

public:
    SuperMutant();
    SuperMutant(const SuperMutant &src);
    SuperMutant &operator=(const SuperMutant &rhs);
    virtual ~SuperMutant();

    virtual     void takeDamage(int damage);
};


#endif