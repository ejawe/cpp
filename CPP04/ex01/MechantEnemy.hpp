/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MechantEnemy.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejawe <ejawe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:25:44 by ejawe             #+#    #+#             */
/*   Updated: 2021/03/02 12:25:45 by ejawe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MECHANTENEMY_H
# define MECHANTENEMY_H

#include <string>
#include <iostream>
#include "Enemy.hpp"

class MechantEnemy : public Enemy
{

private:

public:
    MechantEnemy();
    MechantEnemy(const MechantEnemy &src);
    MechantEnemy &operator=(const MechantEnemy &rhs);
    virtual ~MechantEnemy();

};


#endif